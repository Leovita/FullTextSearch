#ifndef org_apache_lucene_analysis_ja_JapaneseNumberFilter_H
#define org_apache_lucene_analysis_ja_JapaneseNumberFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseNumberFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_incrementToken_947277eca0748c4e,
              mid_isArabicNumeral_4e84a8c37896b7c5,
              mid_isNumeral_4a13a663b5c11133,
              mid_isNumeral_4e84a8c37896b7c5,
              mid_isNumeralPunctuation_4a13a663b5c11133,
              mid_isNumeralPunctuation_4e84a8c37896b7c5,
              mid_normalizeNumber_cb0eb1432185fc94,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseNumberFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseNumberFilter(const JapaneseNumberFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            JapaneseNumberFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            jboolean isArabicNumeral(jchar) const;
            jboolean isNumeral(const ::java::lang::String &) const;
            jboolean isNumeral(jchar) const;
            jboolean isNumeralPunctuation(const ::java::lang::String &) const;
            jboolean isNumeralPunctuation(jchar) const;
            ::java::lang::String normalizeNumber(const ::java::lang::String &) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseNumberFilter);
          extern PyTypeObject *PY_TYPE(JapaneseNumberFilter);

          class t_JapaneseNumberFilter {
          public:
            PyObject_HEAD
            JapaneseNumberFilter object;
            static PyObject *wrap_Object(const JapaneseNumberFilter&);
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
