import re
import urllib.request,urllib.error
import bs4

baseUrl = "https://www.luogu.com.cn/problem/P"
savePath = "C:\\Users\\alant\\Desktop\\洛谷题目爬取\\"

# minn = 1316
# maxn = 2000             #最大题号
#
# def main():
#     print("计划爬取到P{}".format(maxn))
#     for i in range(minn,maxn+1):
#         print("正在爬取P{}...".format(i),end="")
#         html = getHTML(baseUrl + str(i))
#         if html == "error":
#             print("爬取失败，可能是不存在该题或无权查看")
#         else:
#             problemMD = getMD(html)
#             print("爬取成功！正在保存...",end="")
#             saveData(problemMD,"P"+str(i)+".md")
#             print("保存成功!")
#     print("爬取完毕")

def main():
    pNum = input("请输入题目编号:")
    html = getHTML(baseUrl+pNum)
    if html == "error":
        print("爬取失败，可能是不存在该题或无权查看")
    else:
        problemMD = getMD(html)
        print("爬取成功！正在保存...", end="")
        saveData(problemMD, "README" + ".md")
        filePath=savePath+"P"+pNum+".cpp";
        file =open(filePath,"x");#创建cpp文件并写入头文件和创建main函数
        file.write("#include <iostream>\n\nusing namespace std;\n\nint main(){\n\n\treturn 0;\n}")
        print("保存成功!")




def getHTML(url):
    headers = {
        "user-agent": "Mozilla / 5.0(Windows NT 10.0;Win64;x64) AppleWebKit / 537.36(KHTML, likeGecko) Chrome / 85.0.4183.121 Safari / 537.36"
    }
    request = urllib.request.Request(url = url,headers = headers)
    response = urllib.request.urlopen(request)
    html = response.read().decode('utf-8')
    if str(html).find("Exception") == -1:#洛谷中没找到该题目或无权查看的提示网页中会有该字样
        return html
    else:
        return "error"

def getMD(html):
    bs = bs4.BeautifulSoup(html,"html.parser")
    core = bs.select("article")[0]
    md = str(core)
    md = re.sub("<h1>","# ",md)
    md = re.sub("<h2>","## ",md)
    md = re.sub("<h3>","#### ",md)
    md = re.sub("</?[a-zA-Z]+[^<>]*>","",md)
    return md

def saveData(data,filename):
    cfilename = savePath + filename
    file = open(cfilename,"w",encoding="utf-8")
    for d in data:
        file.writelines(d)
    file.close()

if __name__ == '__main__':
    main()
