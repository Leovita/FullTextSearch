#ifndef org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H
#define org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
          class POS$Type;
          namespace tokenattributes {
            class PartOfSpeechAttribute;
          }
          namespace dict {
            class KoMorphData$Morpheme;
          }
          class Token;
        }
      }
      namespace util {
        class AttributeReflector;
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
      namespace analysis {
        namespace ko {
          namespace tokenattributes {

            class PartOfSpeechAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_clear_3720c61b0679eb3e,
                mid_copyTo_9be83c6b2aff7007,
                mid_getLeftPOS_8319649eebaf05cc,
                mid_getMorphemes_da3226d9a4bd4f43,
                mid_getPOSType_ee544d89d14021b5,
                mid_getRightPOS_8319649eebaf05cc,
                mid_reflectWith_454217ab6e97f729,
                mid_setToken_cff4f6c452786eb5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PartOfSpeechAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PartOfSpeechAttributeImpl(const PartOfSpeechAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              PartOfSpeechAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
              JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes() const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
              void setToken(const ::org::apache::lucene::analysis::ko::Token &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(PartOfSpeechAttributeImpl);
            extern PyTypeObject *PY_TYPE(PartOfSpeechAttributeImpl);

            class t_PartOfSpeechAttributeImpl {
            public:
              PyObject_HEAD
              PartOfSpeechAttributeImpl object;
              static PyObject *wrap_Object(const PartOfSpeechAttributeImpl&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
