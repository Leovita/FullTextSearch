#ifndef org_apache_lucene_analysis_ko_KoreanPartOfSpeechStopFilter_H
#define org_apache_lucene_analysis_ko_KoreanPartOfSpeechStopFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace ko {
          class POS$Tag;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanPartOfSpeechStopFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_init$_b0ad0d06968713a0,
              mid_accept_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanPartOfSpeechStopFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanPartOfSpeechStopFilter(const KoreanPartOfSpeechStopFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            static ::java::util::Set *DEFAULT_STOP_TAGS;

            KoreanPartOfSpeechStopFilter(const ::org::apache::lucene::analysis::TokenStream &);
            KoreanPartOfSpeechStopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
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
          extern PyType_Def PY_TYPE_DEF(KoreanPartOfSpeechStopFilter);
          extern PyTypeObject *PY_TYPE(KoreanPartOfSpeechStopFilter);

          class t_KoreanPartOfSpeechStopFilter {
          public:
            PyObject_HEAD
            KoreanPartOfSpeechStopFilter object;
            static PyObject *wrap_Object(const KoreanPartOfSpeechStopFilter&);
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
