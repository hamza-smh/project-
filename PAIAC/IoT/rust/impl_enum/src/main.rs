fn main() {
    let msg = Message::Write(String::from(" Do Something!"));
    msg.call(); //here self = msg
    let msg2 = Message::ChangeColour(10, 29, 38);
    msg2.call();
}

#[derive(Debug)]
enum Message {
    Quit,                        //unit struct
    Write(String),               //String
    Move { x: i32, y: i32 },     //struct             // Defining axes as a struct within an enum
    ChangeColour(u32, u32, u32), //tuple
}

// defining a method for enum
impl Message {
    fn call(&self) {
        println!("{:?}", self); //prints (name of)friend of an object
    }
}
