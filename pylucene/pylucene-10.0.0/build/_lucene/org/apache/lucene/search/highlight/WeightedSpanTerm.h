#ifndef org_apache_lucene_search_highlight_WeightedSpanTerm_H
#define org_apache_lucene_search_highlight_WeightedSpanTerm_H

#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class PositionSpan;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedSpanTerm : public ::org::apache::lucene::search::highlight::WeightedTerm {
           public:
            enum {
              mid_init$_0ecabbb1d6a25118,
              mid_init$_90bc29c98029f266,
              mid_addPositionSpans_acbb405b60a30822,
              mid_checkPosition_a8281eb3b9d9672d,
              mid_getPositionSpans_1387e1e2702ac173,
              mid_isPositionSensitive_9aa4f33e82ea333f,
              mid_setPositionSensitive_f5dd97eebf6a215a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTerm(jobject obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTerm(const WeightedSpanTerm& obj) : ::org::apache::lucene::search::highlight::WeightedTerm(obj) {}

            WeightedSpanTerm(jfloat, const ::java::lang::String &);
            WeightedSpanTerm(jfloat, const ::java::lang::String &, jboolean);

            void addPositionSpans(const ::java::util::List &) const;
            jboolean checkPosition(jint) const;
            ::java::util::List getPositionSpans() const;
            jboolean isPositionSensitive() const;
            void setPositionSensitive(jboolean) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTerm);
          extern PyTypeObject *PY_TYPE(WeightedSpanTerm);

          class t_WeightedSpanTerm {
          public:
            PyObject_HEAD
            WeightedSpanTerm object;
            static PyObject *wrap_Object(const WeightedSpanTerm&);
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
