#ifndef org_apache_lucene_search_grouping_AllGroupHeadsCollector$GroupHead_H
#define org_apache_lucene_search_grouping_AllGroupHeadsCollector$GroupHead_H

#include "java/lang/Object.h"

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
        namespace grouping {

          class AllGroupHeadsCollector$GroupHead : public ::java::lang::Object {
           public:
            enum {
              mid_setNextReader_b7b06dce0a4097ed,
              mid_updateDocHead_540b2b23d51b1efd,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_compare_7f733b5d08bb5ec4,
              max_mid
            };

            enum {
              fid_doc,
              fid_groupValue,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupHeadsCollector$GroupHead(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupHeadsCollector$GroupHead(const AllGroupHeadsCollector$GroupHead& obj) : ::java::lang::Object(obj) {}

            jint _get_doc() const;
            void _set_doc(jint) const;
            ::java::lang::Object _get_groupValue() const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(AllGroupHeadsCollector$GroupHead);
          extern PyTypeObject *PY_TYPE(AllGroupHeadsCollector$GroupHead);

          class t_AllGroupHeadsCollector$GroupHead {
          public:
            PyObject_HEAD
            AllGroupHeadsCollector$GroupHead object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupHeadsCollector$GroupHead *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupHeadsCollector$GroupHead&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupHeadsCollector$GroupHead&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
