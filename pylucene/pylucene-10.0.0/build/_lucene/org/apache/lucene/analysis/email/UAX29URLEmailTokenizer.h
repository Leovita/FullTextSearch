#ifndef org_apache_lucene_analysis_email_UAX29URLEmailTokenizer_H
#define org_apache_lucene_analysis_email_UAX29URLEmailTokenizer_H

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace email {

          class UAX29URLEmailTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_cf56ef8c7a468300,
              mid_close_e7bdbe105ce1bafb,
              mid_end_e7bdbe105ce1bafb,
              mid_getMaxTokenLength_bd89ce15dad49192,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_setMaxTokenLength_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailTokenizer(const UAX29URLEmailTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ALPHANUM;
            static jint EMAIL;
            static jint EMOJI;
            static jint HANGUL;
            static jint HIRAGANA;
            static jint IDEOGRAPHIC;
            static jint KATAKANA;
            static jint MAX_TOKEN_LENGTH_LIMIT;
            static jint NUM;
            static jint SOUTHEAST_ASIAN;
            static JArray< ::java::lang::String > *TOKEN_TYPES;
            static jint URL;

            UAX29URLEmailTokenizer();
            UAX29URLEmailTokenizer(const ::org::apache::lucene::util::AttributeFactory &);

            void close() const;
            void end() const;
            jint getMaxTokenLength() const;
            jboolean incrementToken() const;
            void reset() const;
            void setMaxTokenLength(jint) const;
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
        namespace email {
          extern PyType_Def PY_TYPE_DEF(UAX29URLEmailTokenizer);
          extern PyTypeObject *PY_TYPE(UAX29URLEmailTokenizer);

          class t_UAX29URLEmailTokenizer {
          public:
            PyObject_HEAD
            UAX29URLEmailTokenizer object;
            static PyObject *wrap_Object(const UAX29URLEmailTokenizer&);
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
