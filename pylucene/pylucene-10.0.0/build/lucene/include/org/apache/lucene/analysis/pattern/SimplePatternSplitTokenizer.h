#ifndef org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H
#define org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class SimplePatternSplitTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_init$_7350cbdcd883df0a,
              mid_init$_b892ec2b85f3f867,
              mid_init$_18b08a7a7bbbf6e0,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternSplitTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternSplitTokenizer(const SimplePatternSplitTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            SimplePatternSplitTokenizer(const ::java::lang::String &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::util::automaton::Automaton &);
            SimplePatternSplitTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::java::lang::String &, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(SimplePatternSplitTokenizer);
          extern PyTypeObject *PY_TYPE(SimplePatternSplitTokenizer);

          class t_SimplePatternSplitTokenizer {
          public:
            PyObject_HEAD
            SimplePatternSplitTokenizer object;
            static PyObject *wrap_Object(const SimplePatternSplitTokenizer&);
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
