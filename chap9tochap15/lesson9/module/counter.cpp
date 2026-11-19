int g_totalCalls{ 0 };

static int s_secret{ 42 };


static int helper(int x)
{
    return x * 2;
}


int publicFunction(int x)
{
    ++g_totalCalls;
    return helper(x) + s_secret;
}