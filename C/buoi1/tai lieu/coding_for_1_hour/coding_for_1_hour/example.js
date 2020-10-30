/**
Danh sách các hàm sử dụng trong chương trình 1 giờ code
I. Các chức năng bắt buộc chạy đầu tiền
1. Thêm header cho ứng dung
        them_header()
2. Khỏi tạo cấu trúc website & footer
        them_footer()
II. Các chức năng thêm theo sở thích
1. Thêm chức năng chat
        them_chat()
2. Thêm bài viết phía tay trái
        them_bai_viet_trai(fullname, avatar, content, thumbnail, like)
        => Giải thích các tham số
        fullname: Thay thể bằng tên của học viên
        avatar: link hình ảnh lấy trên mạng
        content: nội dung bài viết
        thumbnail: link hình ảnh cho bài viết => lấy trên mạng => Để trống thì ko hiển thị thumbnail
        like: số lượt thích bài viết => mặc định là 10 like
3. Thêm bài viết phía tay phải
        them_bai_viet_phai(fullname, avatar, content, thumbnail, like)
        => Giải thích như trên
4. Thêm bài viết ở giữa
        them_bai_viet_chinh(fullname, avatar, content, thumbnail, like)
        => Giải thích như trên  
5. Hiển thị nút cho phép thêm bài viết
        hien_thi_nut_bai_viet()
III. Nâng cáo để được 10 điểm
1. Hàm sửa màu chữ
        sua_mau_chu(selector, color)
        => Giải thích
                selector: tên thẻ hoặc id => hướng dẫn cách nhận biết tên và id
                color: mã màu
2. Hàm sửa màu nền
        sua_mau_nen(selector, color)
        => Giải thích
                selector: tên thẻ hoặc id => hướng dẫn cách nhận biết tên và id
                color: mã màu hoặc link hình ảnh trên mạng
Cách chọn mã màu: Lên google gõ color picker => sẽ hỗ trợ chọn mã màu
*/

them_header()
them_footer()
hien_thi_nut_bai_viet()

them_bai_viet_chinh(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`)

them_bai_viet_chinh(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1599295212/ll51kiexglntktcjydcl.jpg`)

them_bai_viet_chinh(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`)

them_bai_viet_phai(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1599295212/ll51kiexglntktcjydcl.jpg`)

them_bai_viet_trai(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1599295212/ll51kiexglntktcjydcl.jpg`)

them_bai_viet_trai(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1599295212/ll51kiexglntktcjydcl.jpg`)

them_bai_viet_trai(`TRAN VAN DIEP`, `https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png`, `Chương trình Liên thông
ĐẠI HỌC QUỐC TẾ
Ngoài môi trường giảng dạy quốc tế, chúng tôi còn giúp bạn Liên thông lên các trường ĐH Quốc tế như RMIT, AUT,`)

them_chat()

sua_mau_chu('h4', 'red')
sua_mau_chu('div', 'blue')
sua_mau_chu('p', 'green')
sua_mau_nen('#content_6', '#4287f5')
sua_mau_nen('#main', 'https://photo-1-baomoi.zadn.vn/w1000_r1/2020_05_02_180_34912744/288e03366d75842bdd64.jpg')
sua_mau_nen('#content_5', 'https://diy-magazine.s3.amazonaws.com/d/diy/Artists/G/Girl-In-red/_landscape/188378/Girl-in-Red_-by-Chris-Almeida-1.jpg')