#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class ConditionalTokenFilterFactory;
        }
        class TokenFilterFactory;
        class CharFilterFactory;
        namespace custom {
          class CustomAnalyzer;
          class CustomAnalyzer$ConditionBuilder;
          class CustomAnalyzer$Builder;
        }
        class TokenizerFactory;
      }
      namespace util {
        class Version;
      }
    }
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
              mid_addCharFilter_1046886cea68cdc7,
              mid_addCharFilter_4839feb2315d3709,
              mid_addCharFilter_33264d8686cd4e5f,
              mid_addCharFilter_ba0e6f67cfe5959d,
              mid_addTokenFilter_1046886cea68cdc7,
              mid_addTokenFilter_4839feb2315d3709,
              mid_addTokenFilter_33264d8686cd4e5f,
              mid_addTokenFilter_ba0e6f67cfe5959d,
              mid_build_fe560789edadfaa3,
              mid_when_c6cd3554fdef4d38,
              mid_when_f0fb92f2376bfe15,
              mid_when_ed95f9b1a7f17afb,
              mid_when_aab6d90f0c7212fd,
              mid_when_d6f70b9731e626ce,
              mid_whenTerm_9cca3701cc8633d2,
              mid_withDefaultMatchVersion_0d38d4f0493626aa,
              mid_withOffsetGap_cb65015e8996f8d0,
              mid_withPositionIncrementGap_cb65015e8996f8d0,
              mid_withTokenizer_1046886cea68cdc7,
              mid_withTokenizer_4839feb2315d3709,
              mid_withTokenizer_33264d8686cd4e5f,
              mid_withTokenizer_ba0e6f67cfe5959d,
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
