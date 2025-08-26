#ifndef org_apache_lucene_analysis_util_CharTokenizer_H
#define org_apache_lucene_analysis_util_CharTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace util {
    namespace function {
      class IntPredicate;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharTokenizer;
        }
      }
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_cf56ef8c7a468300,
              mid_init$_3183b52194c9e763,
              mid_end_e7bdbe105ce1bafb,
              mid_fromSeparatorCharPredicate_ff5beb8bf504fb27,
              mid_fromSeparatorCharPredicate_d7cea73dcd6e0e44,
              mid_fromTokenCharPredicate_ff5beb8bf504fb27,
              mid_fromTokenCharPredicate_d7cea73dcd6e0e44,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_isTokenChar_a8281eb3b9d9672d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTokenizer(const CharTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_WORD_LEN;

            CharTokenizer();
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);

            void end() const;
            static CharTokenizer fromSeparatorCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromSeparatorCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(CharTokenizer);
          extern PyTypeObject *PY_TYPE(CharTokenizer);

          class t_CharTokenizer {
          public:
            PyObject_HEAD
            CharTokenizer object;
            static PyObject *wrap_Object(const CharTokenizer&);
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
