#ifndef org_apache_lucene_search_join_QueryBitSetProducer_H
#define org_apache_lucene_search_join_QueryBitSetProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace join {
          class BitSetProducer;
        }
      }
      namespace util {
        class BitSet;
      }
      namespace index {
        class LeafReaderContext;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class QueryBitSetProducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d7278af460a7b96a,
              mid_equals_570b5248a6da3ef6,
              mid_getBitSet_08a963d795e30c63,
              mid_getQuery_a3eacfacada795d4,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryBitSetProducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryBitSetProducer(const QueryBitSetProducer& obj) : ::java::lang::Object(obj) {}

            QueryBitSetProducer(const ::org::apache::lucene::search::Query &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BitSet getBitSet(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::Query getQuery() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(QueryBitSetProducer);
          extern PyTypeObject *PY_TYPE(QueryBitSetProducer);

          class t_QueryBitSetProducer {
          public:
            PyObject_HEAD
            QueryBitSetProducer object;
            static PyObject *wrap_Object(const QueryBitSetProducer&);
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
