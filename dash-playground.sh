# This file is for playing around with dash.

# Parameter expansion of command line arguments.

firstParameter=$1
secondParameter=$2
echo Variable Expansion: \\n
echo "using just \$1 " $1
echo "using \$firstParameter in paratheses: $firstParameter"
echo "using var name in paranthases: firstParamter"
echo "using \${var} ${secondParameter}"
echo ${secondParameter}
echo "Using \$*: " $*
echo "Using \$@: " $@
echo "Using \$# " $#
echo "process id through \$$ sign: " $$
echo "script name through \$0: $0"

# Present environment variables:

echo \\n Environment Variables:
echo there are environemnt variables present in this script which are also available globally!
echo see for instance \$Home: $HOME 

