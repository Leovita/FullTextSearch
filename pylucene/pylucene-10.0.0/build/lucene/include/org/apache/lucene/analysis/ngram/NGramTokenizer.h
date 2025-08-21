#ifndef org_apache_lucene_analysis_ngram_NGramTokenizer_H
#define org_apache_lucene_analysis_ngram_NGramTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
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
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {

          class NGramTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_init$_b716f677a5f19515,
              mid_end_3720c61b0679eb3e,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              mid_isTokenChar_ae22d3a856ad56f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramTokenizer(const NGramTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_NGRAM_SIZE;
            static jint DEFAULT_MIN_NGRAM_SIZE;

            NGramTokenizer();
            NGramTokenizer(jint, jint);
            NGramTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jint);

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
        namespace ngram {
          extern PyType_Def PY_TYPE_DEF(NGramTokenizer);
          extern PyTypeObject *PY_TYPE(NGramTokenizer);

          class t_NGramTokenizer {
          public:
            PyObject_HEAD
            NGramTokenizer object;
            static PyObject *wrap_Object(const NGramTokenizer&);
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
