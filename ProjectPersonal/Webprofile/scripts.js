function emailsend(){
    var guicauhoi = document.getElementById('question').value;
    var name =document.getElementById('name').value;
    var tn = "Câu hỏi: " +guicauhoi+"<br/> Tên: " +name;
    Email.send({
        Host : "smtp.elasticemail.com",
        Username : "nguyendinhkhanhnguyen1@gmail.com",
        Password : "835FA531A4C3C0FCD5813F1467930B9EE2E8",
        To : '23T1080051@husc.edu.vn',
        From : "nguyendinhkhanhnguyen1@gmail.com",
        Subject : "This is the subject",
        Body : tn
    }).then(
      message => {
        if(message=='OK'){
            swal({
              title: "iuuu nhắm",
              text: "Cám ơn bạn nhé",
              icon: "success",
              button: "Oke",
            });
        }else{
            Swal.fire({
                icon: 'Lỗi',
                title: 'Oops...',
                // text: 'Something went wrong!',
              })
        }
      }
    );
}