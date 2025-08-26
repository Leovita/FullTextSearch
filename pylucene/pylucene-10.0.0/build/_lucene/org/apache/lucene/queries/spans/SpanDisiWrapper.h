#ifndef org_apache_lucene_queries_spans_SpanDisiWrapper_H
#define org_apache_lucene_queries_spans_SpanDisiWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        class DocIdSetIterator;
      }
      namespace queries {
        namespace spans {
          class Spans;
          class SpanDisiWrapper;
        }
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
      namespace queries {
        namespace spans {

          class SpanDisiWrapper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_37c668aed6429a31,
              max_mid
            };

            enum {
              fid_approximation,
              fid_cost,
              fid_doc,
              fid_iterator,
              fid_lastApproxMatchDoc,
              fid_lastApproxNonMatchDoc,
              fid_matchCost,
              fid_next,
              fid_spans,
              fid_twoPhaseView,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanDisiWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanDisiWrapper(const SpanDisiWrapper& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::search::DocIdSetIterator _get_approximation() const;
            jlong _get_cost() const;
            jint _get_doc() const;
            void _set_doc(jint) const;
            ::org::apache::lucene::search::DocIdSetIterator _get_iterator() const;
            jint _get_lastApproxMatchDoc() const;
            void _set_lastApproxMatchDoc(jint) const;
            jint _get_lastApproxNonMatchDoc() const;
            void _set_lastApproxNonMatchDoc(jint) const;
            jfloat _get_matchCost() const;
            SpanDisiWrapper _get_next() const;
            void _set_next(const SpanDisiWrapper &) const;
            ::org::apache::lucene::queries::spans::Spans _get_spans() const;
            ::org::apache::lucene::search::TwoPhaseIterator _get_twoPhaseView() const;

            SpanDisiWrapper(const ::org::apache::lucene::queries::spans::Spans &);
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
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanDisiWrapper);
          extern PyTypeObject *PY_TYPE(SpanDisiWrapper);

          class t_SpanDisiWrapper {
          public:
            PyObject_HEAD
            SpanDisiWrapper object;
            static PyObject *wrap_Object(const SpanDisiWrapper&);
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
