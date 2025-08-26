#ifndef org_apache_lucene_search_matchhighlight_OffsetsRetrievalStrategy_H
#define org_apache_lucene_search_matchhighlight_OffsetsRetrievalStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MatchesIterator;
        namespace matchhighlight {
          class OffsetRange;
          class MatchRegionRetriever$FieldValueProvider;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class OffsetsRetrievalStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_get_aa6d5677fa56b028,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsRetrievalStrategy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsRetrievalStrategy(const OffsetsRetrievalStrategy& obj) : ::java::lang::Object(obj) {}

            ::java::util::List get(const ::org::apache::lucene::search::MatchesIterator &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$FieldValueProvider &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsRetrievalStrategy);
          extern PyTypeObject *PY_TYPE(OffsetsRetrievalStrategy);

          class t_OffsetsRetrievalStrategy {
          public:
            PyObject_HEAD
            OffsetsRetrievalStrategy object;
            static PyObject *wrap_Object(const OffsetsRetrievalStrategy&);
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
