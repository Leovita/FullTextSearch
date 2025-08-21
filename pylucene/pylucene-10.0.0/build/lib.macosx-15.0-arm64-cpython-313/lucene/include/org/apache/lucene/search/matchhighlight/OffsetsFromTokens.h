#ifndef org_apache_lucene_search_matchhighlight_OffsetsFromTokens_H
#define org_apache_lucene_search_matchhighlight_OffsetsFromTokens_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetsRetrievalStrategy;
          class OffsetRange;
          class MatchRegionRetriever$FieldValueProvider;
        }
        class MatchesIterator;
      }
      namespace analysis {
        class Analyzer;
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

          class OffsetsFromTokens : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c50f2f6f1d850d13,
              mid_get_c33fe7c6bf5bf02a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsFromTokens(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsFromTokens(const OffsetsFromTokens& obj) : ::java::lang::Object(obj) {}

            OffsetsFromTokens(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

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
          extern PyType_Def PY_TYPE_DEF(OffsetsFromTokens);
          extern PyTypeObject *PY_TYPE(OffsetsFromTokens);

          class t_OffsetsFromTokens {
          public:
            PyObject_HEAD
            OffsetsFromTokens object;
            static PyObject *wrap_Object(const OffsetsFromTokens&);
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
