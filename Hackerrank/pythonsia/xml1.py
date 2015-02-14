import xml.etree.ElementTree as etree
N = int(input())
feed = ""

while N > 0 :
	s = input()
	feed = feed + s + '\n'
	N -= 1
#print(feed)
tree = etree.ElementTree(etree.fromstring(feed))
root = tree.getroot()
#print(root,len(root))
count = len(root.attrib)

for child in root:
	#print((child.attrib), len(child.attrib))
	cc = child.getchildren() #for nested childrens.
	count = count + len(child.attrib)
	for c in cc: #children of children
		if len(c.attrib) != 0:
			count = count + len(c.attrib)
print(count)
