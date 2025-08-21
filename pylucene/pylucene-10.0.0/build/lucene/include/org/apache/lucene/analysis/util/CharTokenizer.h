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
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace util {
          class CharTokenizer;
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
        namespace util {

          class CharTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_d7660885ec4170d8,
              mid_init$_5b7a424424431350,
              mid_end_3720c61b0679eb3e,
              mid_fromSeparatorCharPredicate_8103e187f0883313,
              mid_fromSeparatorCharPredicate_d274be07dd9d2d94,
              mid_fromTokenCharPredicate_8103e187f0883313,
              mid_fromTokenCharPredicate_d274be07dd9d2d94,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              mid_isTokenChar_ae22d3a856ad56f1,
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
