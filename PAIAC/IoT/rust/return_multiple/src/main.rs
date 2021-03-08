fn main() {

    let pak = String::from(" Pakistan Zindabad");
    println!("My country is {}",pak);

    let (i,j) = length(pak);
    println!("{}",i);

    //the variable 'pak' has been borrowed by length() so 'pak' is out of scope
    //so we returned the String(country) to get back 'pak'
    println!("The length of the word '{}'is '{}'",j,i);

}
fn length(country : String) -> (usize,String) {
    (country.len(),country)


//to re-use the variable once borrowed to a function return it again -Simple! 
}