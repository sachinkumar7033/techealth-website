 <p>Software Technology Parks of India, Plot C-184, Indl. Area Phase-8A, Mohali (Punjab) -160071.</p>
        <p>First Floor ACIC RISE AssociationChandigarh Engineering College, Landran, Mohali.</p>
        <p>Okhla Phase 2, New Delhi, India - 110044</p>
        <p>+91 9717365884<br>+91 6200922552</p>
        <p>Email: info@techealth.in</p>



        body {
    margin: 0;
    font-family: Arial, sans-serif;
}

body {
    margin: 0;
    padding: 0;
    font-family: Arial, sans-serif;
  }
  
  .navbar {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 20px;
    height: 20px;
    background-color: rgba(255, 255, 255, 0.5);
  }
  
  .logo img {
    width: 100px;
  }
  
  .menu {
    list-style-type: none;
    margin: 0;
    padding: 0;
    display: flex;
  }
  
  .menu li {
    margin-right: 20px;
  }
  
  .menu li:last-child {
    margin-right: 0;
  }
  
  .menu a {
    text-decoration: none;
    color: #333;
  }
  
  .signup a {
    padding: 10px 20px;
    background-color: #333;
    color: #fff;
    text-decoration: none;
    border-radius: 5px;
  }
  
  .signup a:hover {
    background-color: #555;
  }
    


body, html {
    margin: 0;
    padding: 0;
    height: 100%;
}


.homepage {
    height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    text-align: center;
}

.background-image {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    z-index: -1;
    background-image: url('Crashed\ Car.jpg'); 
    background-size: cover;
    background-position: center;
    color: white;
}
.background-image h1 {
    font-size: 36px;
    position: absolute;
    bottom: 130px;
    left: 30px;
    font-size: 70px;
    font-family:a;
}

.background-image {
    position: relative;
}

.background-image p {
    font-family: a;
    font-size: 36px;
    position: absolute;
    bottom: 65px;
    left: 40px;
    font-size: 45px;
    color: rgb(238, 255, 0);
}

@media only screen and (max-width: 480px) {
    .logo img {
        height: 100px; 
    }

    .background-image h1 {
        font-size: 40px; 
        bottom: 100px; 
        left: 20px;
    }

    .background-image p {
        font-size: 24px; 
        bottom: 50px; 
        left: 30px; 
    }
}

.contact-button {
    display: inline-block;
    background-color: #4CAF50;
    color: white;
    padding: 10px 20px;
    border-radius: 5px;
    text-decoration: none;
    
   margin-top: 500px;
    margin-right: 1050px; 
}

.contact-button:hover {
    background-color: #4c6dff;
}

body {
    margin: 0;
    padding: 0;
    font-family: Arial, sans-serif;
}

.about-us {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
    display: flex;
    align-items: center;
}

.image-container {
    flex: 1;
    padding: 20px;
}

.text-container {
    flex: 1;
    padding: 20px;
}

img {
    max-width: 100%;
    height: auto;
    display: block;
    margin: 0 auto;
}

h2 {
    font-size: 4em;
    font-family: a;
    margin-bottom: 20px;
     
}

p {
    font-size: 1.2em;
    font-family: Arial, Helvetica, sans-serif;
    letter-spacing: 0.1em;
}


@media screen and (max-width: 768px) {
    .about-us {
        flex-direction: column;
    }
    .image-container,
    .text-container {
        flex: none;
        width: 100%;
        padding: 10px;
    }
    img {
        max-width: 100%;
    }
}

body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}
.container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
    background-color: #eff0f1;
}
h1 {
    text-align: center;
}
.products {
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
}
.product {
    width: calc(33.33% - 20px);
    margin-bottom: 20px;
    padding: 20px;
    border: 1px solid #ccc;
    box-sizing: border-box;
    text-align: center;
    background-color: #ffffff;
}
.product img {
    max-width: 100%;
    height: auto;
}
.product h2 {
    margin-top: 10px;
    font-size: 1.2em;
}
.buy-btn {
    display: block;
    margin-top: 10px;
    padding: 10px 20px;
    background-color: #007bff;
    color: #fff;
    text-decoration: none;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    transition: background-color 0.3s;
}
.buy-btn:hover {
    background-color: #32e0ff;
}
@media (max-width: 768px) {
    .product {
        width: calc(50% - 20px);
    }
}
@media (max-width: 480px) {
    .product {
        width: 100%;
    }
}

body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}

.container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
}

h2 {
    text-align: center;
}

.services {
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
}

.service {
    width: calc(30% - 20px);
    text-align: center;
    transition: background-color 0.3s ease;
    border-radius: 20px;
    box-shadow: 5px 5px 20px rgba(0, 0, 0, 0.2);
    margin: 20px;
}

.service img {
    max-width: 50%;
    height: auto;
}

.service h2 {
    margin-top: 10px;
    font-size: 1.2em;
}

.service:hover {
    background-color: rgb(3, 182, 247); 
}

@media (max-width: 768px) {
    .service {
        width: calc(50% - 20px);
    }
}

@media (max-width: 480px) {
    .service {
        width: 100%;
    }
}
.gallery {
    display: flex;
    overflow-x: auto;
    overflow-y: hidden;
    -webkit-overflow-scrolling: touch;
    scroll-snap-type: x mandatory;
    white-space: nowrap;
    gap: 10px;
}

.gallery img {
    width: calc(100% / 3);
    flex-shrink: 0;
    scroll-snap-align: start;
    object-fit: cover;
}

button {
    background-color: transparent;
    border: none;
    cursor: pointer;
    position: absolute;
    top: 50%;
    transform: translateY(-50%);
    z-index: 1;
}

#prevBtn {
    left: 10px;
}

#nextBtn {
    right: 10px;
}


.testimonials {
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
    align-items: center;
    margin-top: 50px;
  }
.testimonial {
    text-align: center;
    width: 100%;
    max-width: 300px;
    margin: 0 10px 20px;
    padding: 20px;
    border: 1px solid #ccc;
    border-radius: 10px;
    transition: background-color 0.3s;
  }
.testimonial img {
    width: 100px;
    height: 100px;
    border-radius: 50%;
    margin-bottom: 10px;
  }
.testimonial:hover {
    background-color: #74e8f0;
  }

  @media screen and (min-width: 768px) {
    .testimonial {
      width: calc(33.33% - 20px);
    }
  }





<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="TecHealth addresses India's leading road accident fatality crisis, introducing KawachQR and EmergencyEye to enhance road safety nationwide.">
    <title>TecHealth - Enriching Lives</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <nav class="navbar">
            <div class="logo">
              <img src="techealth.png" alt="TecHealth Logo">
            </div>
            <ul class="menu">
              <li><a href="#">Home</a></li>
              <li><a href="#">Our Services</a></li>
              <li><a href="#">Our Products</a></li>
              <li><a href="#">About Us</a></li>
            </ul>
            <div class="signup">
              <a href="#">Sign Up</a>
            </div>
          </nav>
    </header>
   
    <div class="homepage">
        <div class="background-image">
            <h1><strong>ENRICHING LIVES</strong></h1>
            <p>You Drive, We Care</p>
            <a href="#" class="contact-button">Contact Us</a> 
        </div>  
    </div>
    
    <div class="about-us">
        <div class="image-container">
            <img src="doc-1.png" alt="About Us Image">
        </div>
        <div class="text-container">
            <h2>About Us</h2>
            <p>TecHealth addresses India's leading road accident fatality crisis, with 1.68 lakh deaths annually and an 11% YoY increase. Introducing KawachQR and EmergencyEye, these innovations offer life-saving QR stickers and electronic crash alerts, revolutionizing emergency services to enhance road safety nationwide.</p>
        </div>
    </div>

    <div class="container">
        <h2>Our Products</h2>
        <div class="products">
            <div class="product">
                <img src="doc-2.png" alt="KawachQR Image">
                <h3>KawachQR</h3>
                <a href="#" class="buy-btn">Buy Now</a>
            </div>
            <div class="product">
                <img src="doc-2.png" alt="EmergencyEye Image">
                <h3>EmergencyEye</h3>
                <a href="#" class="buy-btn">Buy Now</a>
            </div>
            <div class="product">
                <img src="doc-2.png" alt="EmergencyEye Pro Image">
                <h3>EmergencyEye Pro</h3>
                <a href="#" class="buy-btn">Buy Now</a>
            </div>
        </div>
    </div>

    <section class="services-section">
        <div class="services-container">
            <h2>Our Services</h2>
            <div class="services">
                <div class="service">
                    <img src="alert.jpg" alt="Crash Alert Notification Image">
                    <h3>Crash Alert Notification</h3>
                </div>
                <div class="service">
                    <img src="location.jpg" alt="Real Time Location Image">
                    <h3>Real Time Location</h3>
                </div>
                <div class="service">
                    <img src="police.jpg" alt="Police Image">
                    <h3>Police</h3>
                </div>
                <div class="service">
                    <img src="ambulance.jpg" alt="Ambulance Image">
                    <h3>Ambulance</h3>
                </div>
                <div class="service">
                    <img src="frnds.png" alt="Informed To Trusted Contacts Image">
                    <h3>Informed To Trusted Contacts</h3>
                </div>
                <div class="service">
                    <img src="machanics.jpg" alt="Road Assistance Image">
                    <h3>Road Assistance</h3>
                </div>
            </div>
        </div>
    </section>

    <section class="our-glimpses">
        <h2>Our Glimpses</h2>
        <div class="gallery">
            <img src="h1.jpg" alt="Image 1">
            <img src="h2.jpg" alt="Image 2">
            <img src="h3.jpg" alt="Image 3">
            <img src="h4.jpg" alt="Image 4">
            <img src="h1.jpg" alt="Image 5">
            <img src="h2.jpg" alt="Image 6">
        </div>
        <button id="prevBtn" onclick="prevImage()">&#10094;</button>
        <button id="nextBtn" onclick="nextImage()">&#10095;</button>
    </section>

    <h2 style="text-align: center;">Testimonials</h2>

    <div class="testimonials">
        <div class="testimonial">
            <img src="img1.jpg" alt="Profile 1">
            <p>"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut eget tortor nec elit gravida tincidunt. Mauris efficitur est et felis bibendum, vel lacinia urna pharetra."</p>
            <p><strong>- ANKIT DUBEY</strong></p>
        </div>
        <div class="testimonial">
            <img src="img2.jpeg" alt="Profile 2">
            <p>"Nullam euismod nunc nec feugiat varius. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae."</p>
            <p><strong>- AMIT PRASAD </strong></p>
        </div>
        <div class="testimonial">
            <img src="img3.jpeg" alt="Profile 3">
            <p>"Integer auctor nisi at libero faucibus, eget auctor nisi bibendum. Fusce lacinia scelerisque justo, ut fermentum lacus scelerisque sed. Sed a libero metus."</p>
            <p><strong>- DR. SUSANK ROY </strong></p>
        </div>
    </div>
</body>
</html>
