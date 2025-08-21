#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenizerFactory;
        namespace custom {
          class CustomAnalyzer$Builder;
          class CustomAnalyzer$ConditionBuilder;
          class CustomAnalyzer;
        }
        class CharFilterFactory;
        class TokenFilterFactory;
        namespace miscellaneous {
          class ConditionalTokenFilterFactory;
        }
      }
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    namespace function {
      class Predicate;
    }
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_addCharFilter_611bf2c4593e991d,
              mid_addCharFilter_5b1c3054c8f87d02,
              mid_addCharFilter_b745b05bdefa2745,
              mid_addCharFilter_48b444debe1107f5,
              mid_addTokenFilter_611bf2c4593e991d,
              mid_addTokenFilter_5b1c3054c8f87d02,
              mid_addTokenFilter_b745b05bdefa2745,
              mid_addTokenFilter_48b444debe1107f5,
              mid_build_db54c8de36abb33e,
              mid_when_a804166f13052d5c,
              mid_when_8d1034691aafa16a,
              mid_when_8f1956b6dc41b948,
              mid_when_97894207c2295ff9,
              mid_when_4c605a3ddb537c54,
              mid_whenTerm_8b7c1df265d025a8,
              mid_withDefaultMatchVersion_7166ff02e3e7a357,
              mid_withOffsetGap_855d2ac426a89f06,
              mid_withPositionIncrementGap_855d2ac426a89f06,
              mid_withTokenizer_611bf2c4593e991d,
              mid_withTokenizer_5b1c3054c8f87d02,
              mid_withTokenizer_b745b05bdefa2745,
              mid_withTokenizer_48b444debe1107f5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer$Builder(const CustomAnalyzer$Builder& obj) : ::java::lang::Object(obj) {}

            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer build() const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder whenTerm(const ::java::util::function::Predicate &) const;
            CustomAnalyzer$Builder withDefaultMatchVersion(const ::org::apache::lucene::util::Version &) const;
            CustomAnalyzer$Builder withOffsetGap(jint) const;
            CustomAnalyzer$Builder withPositionIncrementGap(jint) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const ::java::util::Map &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer$Builder);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer$Builder);

          class t_CustomAnalyzer$Builder {
          public:
            PyObject_HEAD
            CustomAnalyzer$Builder object;
            static PyObject *wrap_Object(const CustomAnalyzer$Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
