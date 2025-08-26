#ifndef org_apache_lucene_search_MultiPhraseQuery$UnionFullPostingsEnum_H
#define org_apache_lucene_search_MultiPhraseQuery$UnionFullPostingsEnum_H

#include "org/apache/lucene/search/MultiPhraseQuery$UnionPostingsEnum.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiPhraseQuery$UnionFullPostingsEnum : public ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum {
         public:
          enum {
            mid_init$_acbb405b60a30822,
            mid_endOffset_bd89ce15dad49192,
            mid_freq_bd89ce15dad49192,
            mid_getPayload_adbedbc1fa61c358,
            mid_nextPosition_bd89ce15dad49192,
            mid_startOffset_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$UnionFullPostingsEnum(jobject obj) : ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$UnionFullPostingsEnum(const MultiPhraseQuery$UnionFullPostingsEnum& obj) : ::org::apache::lucene::search::MultiPhraseQuery$UnionPostingsEnum(obj) {}

          MultiPhraseQuery$UnionFullPostingsEnum(const ::java::util::List &);

          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextPosition() const;
          jint startOffset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$UnionFullPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$UnionFullPostingsEnum);

        class t_MultiPhraseQuery$UnionFullPostingsEnum {
        public:
          PyObject_HEAD
          MultiPhraseQuery$UnionFullPostingsEnum object;
          static PyObject *wrap_Object(const MultiPhraseQuery$UnionFullPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
