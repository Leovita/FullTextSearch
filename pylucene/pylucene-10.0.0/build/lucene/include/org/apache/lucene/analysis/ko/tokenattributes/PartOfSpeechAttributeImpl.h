#ifndef org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H
#define org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class KoMorphData$Morpheme;
          }
          class POS$Tag;
          class Token;
          class POS$Type;
          namespace tokenattributes {
            class PartOfSpeechAttribute;
          }
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
                mid_init$_e7bdbe105ce1bafb,
                mid_clear_e7bdbe105ce1bafb,
                mid_copyTo_b194e41b568bc1bc,
                mid_getLeftPOS_2a8a370cf50ce28f,
                mid_getMorphemes_26d08ca9e8789c10,
                mid_getPOSType_86949d14aaadbcf7,
                mid_getRightPOS_2a8a370cf50ce28f,
                mid_reflectWith_ac049850cfa29e37,
                mid_setToken_3352cfaa0db5996d,
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
