#[macro_use] extern crate rocket;


#[get("/")]
fn index() -> &'static str {
    "invoicer"
}

#[rocket::main]
async fn main() -> Result<(), rocket::Error> {
    let _ = rocket::build()
        .mount("/", routes![index])
        .launch()
        .await?;

    Ok(())
}
