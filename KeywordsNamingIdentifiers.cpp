//
// Created by Felipe Viana on 2025-08-21.
//

/* C++ reserves a set of 92 words ( as of C++23) for its own use. the words are
 * called Keywords (or reserved words), and each of these keywords has a special meaning
 * within the C++ Language.
 *
 * Here is a list of all the C++ keywords..
 */

/*
alignas
alignof
and
and_eq
asm
auto
bitand
bitor
bool
break
case
catch
char
char8_t (since C++20)
char16_t
char32_t
class
compl
concept (since C++20)
const
consteval (since C++20)
constexpr
constinit (since C++20)
const_cast
continue
co_await (since C++20)
co_return (since C++20)
co_yield (since C++20)
decltype
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace
new
noexcept
not
not_eq
nullptr
operator
or
or_eq
private
protected
public
register
reinterpret_cast
requires (since C++20)
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while
xor
xor_eq
*/

// ----- Identifier naming rules ----

/* As a reminder, the name of a variable (or function, type, or other kind of
 * items) is called an identifier. However there are a few rules that must be
 * followed when naming identifiers.
 *
 * The identifier can not be a keyword, Keywords are reserved.
 * The identifier can only be composed of letter(lower or upper case), number, and
 * underscore character. No symbols
 * The Identifier must begin with a letter (lower or upper case) no number.
 * C++ is case sensitive.
 */

// ----- Identifier naming best practices ----

/* Now that you know how you can name a variable.
 *
 * 1. it is conventional in C++ that variable should begin with a lowercase letter.
 * if the variable name is a single word or acronym, the whole thing should be written
 * lowercase letters */

int value; // conventional

int Value; // unconventional (should start with a lowercase letter)
int VALUE; // unconventional (should all be lowercase)
int VaLuE; // unconventional (see your psychiatrist)

/* Most often, function names are also started with a lowercase. We will follow
 * this convention, since function main starts with a lowercase letter, as do all
 * of the functions in the C++
 */

/* if the variable or function name is multi-word, there are two commom convention
 * words separated by underscore or intercapped, since the capital letters stick
 * up the humps on a camel
 */


int my_variable_name;    // conventional (separated by underscore/snake_case)
int my_function_name();  // conventional (separated by underscore/snake_case)

int myVariableName;      // conventional (intercapped/camelCase)
int myFunctionName();    // conventional (intercapped/camelCase)

int my variable name;    // invalid (whitespace not allowed)
int my function name();  // invalid (whitespace not allowed)

int MyVariableName;      // unconventional (should start with lower case letter)
int MyFunctionName();    // unconventional (should start with lower case letter)

// avoid abbreviations
// avoid starting with underscore

