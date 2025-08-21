#ifndef org_apache_lucene_analysis_classic_ClassicTokenizer_H
#define org_apache_lucene_analysis_classic_ClassicTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
        namespace classic {

          class ClassicTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_d7660885ec4170d8,
              mid_close_3720c61b0679eb3e,
              mid_end_3720c61b0679eb3e,
              mid_getMaxTokenLength_20fbf7565993c3d7,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              mid_setMaxTokenLength_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicTokenizer(const ClassicTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ACRONYM;
            static jint ACRONYM_DEP;
            static jint ALPHANUM;
            static jint APOSTROPHE;
            static jint CJ;
            static jint COMPANY;
            static jint EMAIL;
            static jint HOST;
            static jint NUM;
            static JArray< ::java::lang::String > *TOKEN_TYPES;

            ClassicTokenizer();
            ClassicTokenizer(const ::org::apache::lucene::util::AttributeFactory &);

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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(ClassicTokenizer);
          extern PyTypeObject *PY_TYPE(ClassicTokenizer);

          class t_ClassicTokenizer {
          public:
            PyObject_HEAD
            ClassicTokenizer object;
            static PyObject *wrap_Object(const ClassicTokenizer&);
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
