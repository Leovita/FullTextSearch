#ifndef org_apache_lucene_classification_Classifier_H
#define org_apache_lucene_classification_Classifier_H

#include "java/lang/Object.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        class ClassificationResult;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class Classifier : public ::java::lang::Object {
         public:
          enum {
            mid_assignClass_f41729c7a04388b4,
            mid_getClasses_49920ced44282529,
            mid_getClasses_de45d3d1e8012f87,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Classifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Classifier(const Classifier& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        extern PyType_Def PY_TYPE_DEF(Classifier);
        extern PyTypeObject *PY_TYPE(Classifier);

        class t_Classifier {
        public:
          PyObject_HEAD
          Classifier object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Classifier *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Classifier&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Classifier&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
