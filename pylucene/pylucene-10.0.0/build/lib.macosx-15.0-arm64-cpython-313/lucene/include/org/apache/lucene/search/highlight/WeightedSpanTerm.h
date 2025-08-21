#ifndef org_apache_lucene_search_highlight_WeightedSpanTerm_H
#define org_apache_lucene_search_highlight_WeightedSpanTerm_H

#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
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
              mid_init$_3354ed1a1da7d6a1,
              mid_init$_49fe9b4cb6a0a319,
              mid_addPositionSpans_9425cd4f62c94bce,
              mid_checkPosition_ae22d3a856ad56f1,
              mid_getPositionSpans_36830460e10839eb,
              mid_isPositionSensitive_947277eca0748c4e,
              mid_setPositionSensitive_b110fc3a58c081ab,
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
