#ifndef org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H
#define org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
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
              mid_init$_0d82408c6e55bc30,
              mid_init$_71373fad5757dc3c,
              mid_init$_6f39973749d45a87,
              mid_init$_91899ac25d47e782,
              mid_end_3720c61b0679eb3e,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
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
