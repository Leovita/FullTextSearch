#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIteratorWithSubs_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIteratorWithSubs_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MatchesIterator;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$OfMatchesIteratorWithSubs : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_f71de985ff394fb0,
              mid_endOffset_bd89ce15dad49192,
              mid_freq_bd89ce15dad49192,
              mid_getTerm_adbedbc1fa61c358,
              mid_nextPosition_9aa4f33e82ea333f,
              mid_startOffset_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$OfMatchesIteratorWithSubs(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfMatchesIteratorWithSubs(const OffsetsEnum$OfMatchesIteratorWithSubs& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfMatchesIteratorWithSubs(const ::org::apache::lucene::search::MatchesIterator &);

            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfMatchesIteratorWithSubs);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfMatchesIteratorWithSubs);

          class t_OffsetsEnum$OfMatchesIteratorWithSubs {
          public:
            PyObject_HEAD
            OffsetsEnum$OfMatchesIteratorWithSubs object;
            static PyObject *wrap_Object(const OffsetsEnum$OfMatchesIteratorWithSubs&);
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
