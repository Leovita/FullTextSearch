#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter$QueryOffsetRange_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter$QueryOffsetRange_H

#include "org/apache/lucene/search/matchhighlight/OffsetRange.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class MatchHighlighter$QueryOffsetRange;
        }
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchHighlighter$QueryOffsetRange : public ::org::apache::lucene::search::matchhighlight::OffsetRange {
           public:
            enum {
              mid_init$_e87df57c562056f3,
              mid_slice_c487bdf53ff26693,
              max_mid
            };

            enum {
              fid_query,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchHighlighter$QueryOffsetRange(jobject obj) : ::org::apache::lucene::search::matchhighlight::OffsetRange(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchHighlighter$QueryOffsetRange(const MatchHighlighter$QueryOffsetRange& obj) : ::org::apache::lucene::search::matchhighlight::OffsetRange(obj) {}

            ::org::apache::lucene::search::Query _get_query() const;

            MatchHighlighter$QueryOffsetRange(const ::org::apache::lucene::search::Query &, jint, jint);

            MatchHighlighter$QueryOffsetRange slice(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(MatchHighlighter$QueryOffsetRange);
          extern PyTypeObject *PY_TYPE(MatchHighlighter$QueryOffsetRange);

          class t_MatchHighlighter$QueryOffsetRange {
          public:
            PyObject_HEAD
            MatchHighlighter$QueryOffsetRange object;
            static PyObject *wrap_Object(const MatchHighlighter$QueryOffsetRange&);
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
