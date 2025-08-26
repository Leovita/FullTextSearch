#ifndef org_apache_lucene_analysis_ko_KoreanTokenizer_H
#define org_apache_lucene_analysis_ko_KoreanTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class UnknownDictionary;
            class UserDictionary;
            class TokenInfoDictionary;
            class ConnectionCosts;
            class KoMorphData;
          }
          class KoreanTokenizer$DecompoundMode;
        }
        namespace morph {
          class GraphvizFormatter;
        }
      }
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_045878a3adc43ef6,
              mid_init$_e7213d018110dc87,
              mid_init$_81717881b5baffb1,
              mid_close_e7bdbe105ce1bafb,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_setGraphvizFormatter_faba969b4b03547a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizer(const KoreanTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode *DEFAULT_DECOMPOUND;

            KoreanTokenizer();
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ko::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ko::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::morph::GraphvizFormatter &) const;
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
      namespace analysis {
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizer);
          extern PyTypeObject *PY_TYPE(KoreanTokenizer);

          class t_KoreanTokenizer {
          public:
            PyObject_HEAD
            KoreanTokenizer object;
            static PyObject *wrap_Object(const KoreanTokenizer&);
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
