#ifndef org_apache_lucene_analysis_ko_KoreanNumberFilter_H
#define org_apache_lucene_analysis_ko_KoreanNumberFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanNumberFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_isArabicNumeral_96a1e5bdb33dde4e,
              mid_isNumeral_94f7e759d94961b0,
              mid_isNumeral_96a1e5bdb33dde4e,
              mid_isNumeralPunctuation_94f7e759d94961b0,
              mid_isNumeralPunctuation_96a1e5bdb33dde4e,
              mid_normalizeNumber_fef9c036acf290a9,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanNumberFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanNumberFilter(const KoreanNumberFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            KoreanNumberFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanNumberFilter);
          extern PyTypeObject *PY_TYPE(KoreanNumberFilter);

          class t_KoreanNumberFilter {
          public:
            PyObject_HEAD
            KoreanNumberFilter object;
            static PyObject *wrap_Object(const KoreanNumberFilter&);
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
