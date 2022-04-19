# Linux-Shell-Clone
Linux için yazılmış shell klonu.

# Özet
C programlama dili ve Linux işletim sistemi kullanılarak yazılan bir shell projesi. Shell, bilgisayar çekirdeğinin üzerine eklenmiş farklı komutlarla oluşturulmuş katmanlara denir. Linux’a ait bash bunun bir örneğidir. Bash kendi komutları ve çağrıları olan bir katmandır. Burada farklı programlar çalıştırılabilir, dosya işlemleri yapılabilir ve komutlar girilerek farklı işlemler yapılabilir. Bu projede, kendi özel komutlarına ve programlarına sahip yeni bir shell oluşturuldu.


# Pojedeki Belgeler

• myshell.c : Ana programın çalıştığı dosya. Girdileri alan ve komuta göre gerekli programları çalıştıran program.

• islem.c : Çocuk proses olarak çalışan, gelen argümanlara göre gerekli işlem programını forklayan ve gelen sonucu döndüren program.

• topla.c : Argüman olarak gelen sayıları toplayıp döndüren program.

• cikar.c : Argüman olarak gelen sayıları çıkarıp döndüren program.

• tekrar.c: argüman olarak gelen kelimeyi verilen sayı kadar yazdıran program.

• makeFile: Tüm programları derlemeyi sağlayan makeFile dosyası.


# Proje Özellikleri
Projedeki shell’de geçerli komutlar ve görevleri:
    
• tekrar: İki parametre alır. İlk verilen parametreyi, ikinci verilen parametre kadar ekrana yazdırır.
    
• islem: Üç parametre alır. İlk aldığı parametre topla ya da cikar olmak zorundadır. Ikinci ve üçüncü parametrede kullanıcıdan sayı girmesi beklenir. Ikinci parametre olarak topla girilmesi sonucunda sayıların toplamını, cikar girilmesi sonucunda farkını ekrana yazdırır.
    
• cat: Girilebilecek toplam karakter sayısını aşmadığı sürece sınırsız parametre alır. Yazılan verileri geçici bir dosyada saklayarak ekrana yazdırır. 
    
• exit: Programın çalışmasını durdurur.
    
• clear: Ekranı temizler
   
Girilen komutlar | ile ayrılarak aynı anda birden fazla komut girilebilir. Shell’de bulunmaya herhangi bir komut girildiğinde uyarı mesajı verilir.
