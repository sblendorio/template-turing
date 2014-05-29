#include "test-helper.h"
#include "ruleset.h"
#include "rule.h"
#include "state.h"
#include "colour.h"

using namespace Turing;

#define TEST(x) TestCases::add("ruleset", #x, x)

namespace test_ruleset {
	void single(void) {
		assert_eq("(<rule 2 r -- 3 g> . NIL)", ruleset<rule<state<2>, colour<'r'>, state<3>, colour<'g'>>, List::nil>::to_str());
	}

	void register_tests(void) {
		TEST(single);
	}
}
