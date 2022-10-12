import requests
from bs4 import BeautifulSoup

page = requests.get('http://corona.sumselprov.go.id/index.php?module=home&id=1')

print(page.content)