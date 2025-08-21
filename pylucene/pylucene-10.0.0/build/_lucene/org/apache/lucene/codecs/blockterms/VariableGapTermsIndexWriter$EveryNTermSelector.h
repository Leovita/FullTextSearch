#ifndef org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$EveryNTermSelector_H
#define org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$EveryNTermSelector_H

#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter$IndexTermSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        class TermStats;
      }
      namespace util {
        class BytesRef;
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
      namespace codecs {
        namespace blockterms {

          class VariableGapTermsIndexWriter$EveryNTermSelector : public ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              mid_isIndexTerm_1236ecfbdb38ebd7,
              mid_newField_571a63af52300367,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableGapTermsIndexWriter$EveryNTermSelector(jobject obj) : ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableGapTermsIndexWriter$EveryNTermSelector(const VariableGapTermsIndexWriter$EveryNTermSelector& obj) : ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector(obj) {}

            VariableGapTermsIndexWriter$EveryNTermSelector(jint);

            jboolean isIndexTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::TermStats &) const;
            void newField(const ::org::apache::lucene::index::FieldInfo &) const;
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
      namespace codecs {
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(VariableGapTermsIndexWriter$EveryNTermSelector);
          extern PyTypeObject *PY_TYPE(VariableGapTermsIndexWriter$EveryNTermSelector);

          class t_VariableGapTermsIndexWriter$EveryNTermSelector {
          public:
            PyObject_HEAD
            VariableGapTermsIndexWriter$EveryNTermSelector object;
            static PyObject *wrap_Object(const VariableGapTermsIndexWriter$EveryNTermSelector&);
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
