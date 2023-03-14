
//<div class="category_name">oil</div>
//  <input type="number" id="quantity_6410c04a53b5f" class="input-text qty text" name="quantity" value="1" title="Qty" size="4" min="1" max="" step="1" placeholder="" inputmode="numeric" autocomplete="off" style="background-size: 18px; background-position: 98% 50%; background-repeat: no-repeat; box-shadow: none; background-image: url(&quot;chrome-extension://nhhldecdfagpbfggphklkaeiocfnaafm/src/images/orca-18.png&quot;); cursor: pointer;">
// size is 4 
// size is increasing by 1 when i click on the input box
// if category_name is oil, then change size to "4oil" "5oil" "6oil" i.e. size is increasing by 1 and adding "oil" to it    
// else if category_name is not oil, then change size to "4kg" "5kg" "6kg" i.e. size is increasing by 1


// const input = document.querySelector('.input-text.qty.text');
// if(category_name === 'oil'){
//     input.addEventListener('click', () => {
//         input.size = input.size + 1 + category_name;
//     });
// }

// initial size is 1kg or 1oil
// if category_name is oil, then change size to "1oil" "2oil" "3oil" i.e. size is increasing by 1 and adding "oil" to it
// else if category_name is not oil, then change size to "1kg" "2kg" "3kg" i.e. size is increasing by 1




//const input = document.querySelector('.input-text.qty.text');


const inputs = document.querySelector('.quantity');



input.innerHTML="1kg"
// first nth-child(1) for a then font html tag
let category_names = document.querySelector('.catergory_name div div a font font').innerText;
if(category_names === 'Oils'){
    //add appendChild to input

    const inputs = document.querySelector('.quantity');
    const input = document.createElement('input');
    input.type = 'text';
    input.value = 'oil';
    inputs.appendChild(input);
}

// input[type="text"] {
//     display: flex;
//     order: 4;
//     /* min-width: 30px !important; */
//     padding: 0 5px;
//     width: 35px;
//     height: 42px;
// }