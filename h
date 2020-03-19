*{text-decoration: none;}
.menuimage{
width: 105px;
height: 75 px;
background:rgba(0,0,0,0);
padding: 40px;
margin: left;
margin-top:2%;
text-align: center;
border-radius: 7%;
display: inline-block;
transition: 300ms;

}


	
	#index:hover{
		transform: scale(1.4);
	}

	#index{
	border-radius: 50%;
	width: 70px;
	height: 70px;
		}
	#aboutme:hover{
		
	}
	#aboutme{
	border-radius: 50%;
	width: 70px;
	height: 70px;
	}
	#school:hover{
		transform: scale(1.4);
	}
	#school{
	border-radius: 50%;
	width: 70px;
	height: 70px;}
	#specialmoment:hover{
		transform: scale(1.7);}
	#specialmoment{
	border-radius: 50%;
	width: 70px;
	height: 70px;
transform: scale(1.4);}
	#contact:hover{
		transform: scale(1.4);}
	#contact{
	border-radius: 50%;
	width: 70px;
	height: 70px;}
	#galary:hover{
		transform: scale(1.4);}
	#galary{
	border-radius: 50%;
	width: 70px;
	height: 70px;}
	.menu{
		background:url(../image/b.jpg) no-repeat ;
		margin: 0;
		padding: 0;
		background-size: cover;}
.main{position: absolute;
	width: 1200px;
	min-height: 500px;
	background:#fff;
	margin: 40px auto 0;
	display: flex;
	flex-direction: row;
	flex-wrap: wrap;
	overflow-x: hidden; 
	
	top: 1%;
	width: 1280px;
	right: 5%;
	color: white;
	font-family: century gothic;
	padding: 0 60px;
	width: 70%;
	background-color: rgba(0,0,0,0.6); 
	 overflow-y:  scroll;
	 height: 90%;
	 border-radius: 7%


}
.main h1{display: block; 
	margin: center;
}
.main .pic{
	position: relative;
	width: 400px;
	height: 650px;
	
	margin: 6%;
	box-sizing: border-box;
	display: inline-block; 
}
.main .pic .imgg{
	position: relative;
	overflow: hidden;
}
.main .pic .imgg img{
	max-width: 100%;
	transition: transform 2s;
	width: 1000px;
	height: 350px;
	border-radius: 5%;

}
.main .pic:hover .imgg img{
	transform: scale(1.2);
}
.main .pic .exe{
	position: absolute;
	top: 30px;
	left: 10px;
	bottom: 10px;
	right: 10px;
	background:rgba(0,0,0,0.8);
	border-radius: 5%;
	transform: scaleY(0);
	transition: transform 0.5s;

}
.main .pic:hover .exe {
	transform: scaleY(1);
}

.main .pic .exe .def{
	position: absolute;
	top: 50%;
	transform: translateY(-50%);
	text-align: center;
	padding: 15px;
	color: #ff0
}
.main .pic .exe .def h2{
	margin: 0;
	padding: 0;
	font-size: 20px;
	color: #ff0;

}
.main .pic .exe .def p{
	margin: 10px 0 0;
	padding: 0;
	font-size: 20px;
	color: #ff0;
	
}


	::-webkit-scrollbar
	{
		width:8px;
		background-color:red;
	}
	::-webkit-scrollbar-thumb{
		border-radius: 10px;
	 	background-color:gray;
		box-shadow:inset 0 0 6px rgba(0,0,0,.3);
	}
	::-webkit-scrollbar-track{
		border-radius: 10px;
		background-color:black;
		box-shadow:inset 0 0 6px rgba(0,0,0,.3);
	}














 <header>
        <nav>
          <ul>
            <li><a href="">HOME</a></li>
            <li><a href="">GALLARY</a></li>
            <li><a href="">BLOG</a></li>
            <li><a href="">MY WORK</a></li>
            <li><a href="">CONTACT</a></li>
          </ul>
        </nav>
      </header>


	   <div id="about">
      <img src="./img/profile.JPG" id="prof" alt="">     
      
      <p class="text">Abdulfeta Dedgeba <br>
        Lorem ipsum dolor sit amet, consectetur adipisicing elit. In ipsa id dolor cupiditate dolorem doloribus! <br>
           Laborum soluta unde consequuntur provident eum inventore voluptates doloribus, est, dignissimos ipsa reiciendis alias odit!</p>
          </div>
    </div>



			#skill{
  list-style: none;
  margin: 60px auto;
  color: black;

}
#skill li{
  margin: 20px 0; 

}

.bar{
  background: #353b48;
  display: block;
  height: 2px;
  border: 1px solid rgba(0, 0, 0, 0.53;
}










	<div class="main">
      <h1>Special Moment </h1> <br>
  
  
      <div class="pic">
        <div class="imgg">
          <img src="./img/brief.jpg" alt="rophnan on stage" title="rophnan">
        </div>
        <div class="exe">
          <div class="def">
            <h2>Reflection Concert 2011</h2>
            <p>
            Lorem ipsum, dolor sit amet consectetur adipisicing elit. Eligendi magnam nesciunt sint accusantium aliquid sed, odit et, perspiciatis, labore similique corporis quae voluptatibus repudiandae! Dolore illum sit necessitatibus totam obcaecati?
            </p>
          </div>
        </div>
      </div>
      <div class="pic">
        <div class="imgg">
          <img src="./img/born.jpg">
        </div>
        <div class="exe">
          <div class="def">
            <h2>My Higheschool Graduation</h2>
            <p>
            
            </p>
          </div>
        </div>
      </div>
      <div class="pic">
        <div class="imgg">
          <img src="./img/k.jpg">
        </div>
        <div class="exe">
          <div class="def">
            <h2>Prom Night In Nafyad School</h2>
            <p>
            
            </p>
          </div>
        </div>
      </div>
      
      
      
    </div>
  </section>

  <div class="pimg2">
    <div class="ptext">
      <header>
        <nav>
          <ul>
            <li><a href="">HOME</a></li>
            <li><a href="">GALLARY</a></li>
            <li><a href="">BLOG</a></li>
            <li><a href="">MY WORK</a></li>
            <li><a href="">CONTACT</a></li>
          </ul>
        </nav>
      </header>
      <span class="border trans">
        Image Two Text
      </span>
    </div>
  </div>




   #skill{
           width: 500px;
           margin: 60px auto;
           color: white;
           list-style: none;
           padding: 0;
      
           background: #333;
       }
       #skill li{
           margin: 20px 0;
       }
       .bar{
           background: #353b48;
           display: block;
           height: 2px;
           border: 1px solid rgba(0, 0, 0, 0.5);
           border-radius: 3px;
           overflow: hidden;
           box-shadow: 0 0 10px #2187e7b3;
       }
       .bar span{
           height: 2px;
           float: left;
           background: #2187e7;
       }
       .html{  
           width: 70%;
           animation: html 2s;

       }
       .css{
           width:54%;
           animation: css 5s;
       } 
       @keyframes html {
           0%{
               width: 0%;
           }
           100%{
               width: 70%;
           }
           
       }
       @keyframes css {
           0%{
               width: 0%;
           }
           100%{
               width: 54%;
           }
           
       }




	   <li><h3>JAVA</h3><span class="bar"><span class="java"></span></span></li>
              <li><h3>DATABASE</h3><span class="bar"><span class="dbms"></span></span></li>
              <li><h3>PYTHON</h3><span class="bar"><span class="python"></span></span></li>




			  .image{
	position: absolute; 	
	width: 100%;
	background-color: rgba(0,0,0,0.4);
	height: 90%;
	display: flex;
	flex-direction: row;
	flex-wrap: wrap;
	}
	
	.image .pic{
		position: relative;
		width: 25%;
		height: 25%;		
		box-sizing: border-box;
		display: inline-block;
    /* padding: 15px 15px; */
    
	}
	.pic img{
		width: 100%;
		-webkit-transition: all ease 0.5s;
		transform: scale(1);
		-webkit-transform:scale(1);
		filter: grayscale(100%);


	}
	.pic img:hover{
		transform:scale(1.1);
		-webkit-transform:scale(1.2);
		filter: grayscale(0);
		
	}