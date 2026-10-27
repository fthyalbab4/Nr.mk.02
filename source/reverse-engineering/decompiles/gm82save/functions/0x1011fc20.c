// rea decompile_all
// name: FUN_1011fc20
// address: 0x1011fc20
// body: available
// range: 0x1011fc20-0x1011fc46 inclusive
// range: 0x1011fc5d-0x1011fcff inclusive
// range: 0x101200d9-0x10120129 inclusive
// range: 0x101202f8-0x10120310 inclusive
// range: 0x10120395-0x101203a8 inclusive
// range: 0x101203dc-0x101203f6 inclusive
// range: 0x1012041a-0x1012045a inclusive
// range: 0x101204db-0x101204fe inclusive
// range: 0x10120689-0x101206b3 inclusive
// range: 0x10120827-0x10120922 inclusive
// range: 0x10120a55-0x10120a8f inclusive
// range: 0x10120b09-0x10120b1d inclusive
// range: 0x10120b3f-0x10120b73 inclusive
// range: 0x10120bd1-0x10120be3 inclusive
// range: 0x10120c0b-0x10120c1e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011fc20(undefined4 *param_1,uint param_2)

{
  uint uVar1;

  if (param_2 < 0x2d00) {
                    /* WARNING: Could not recover jumptable at 0x1011fc45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_10120cf4 + (param_2 >> 8) * 4) + 0x1011fc2c))();
    return;
  }
  if ((((0x2c < param_2 - 0xa640) && (0x1a < param_2 - 0xa680)) && (0xc < param_2 - 0xa722)) &&
     (0x3c < param_2 - 0xa732)) {
    if (param_2 - 0xa779 < 3) {
      uVar1 = param_2 + 1 & 0xa77e;
      goto LAB_1011fc8e;
    }
    uVar1 = 0x1d79;
    if (param_2 == 0xa77d) goto LAB_1011fc8e;
    if (8 < param_2 - 0xa77e) {
      if (param_2 == 0xa78b) {
        uVar1 = 0xa78c;
        goto LAB_1011fc8e;
      }
      if (param_2 == 0xa78d) {
        uVar1 = 0x265;
        goto LAB_1011fc8e;
      }
      if ((2 < param_2 - 0xa790) && (0x12 < param_2 - 0xa796)) {
        if ((param_2 - 0xa7aa < 10 & (byte)(0x3df >> ((byte)(param_2 - 0xa7aa) & 0x1f))) != 0) {
          uVar1 = *(uint *)(param_2 * 4 + 0x10137020);
          goto LAB_1011fc8e;
        }
        if (0xe < param_2 - 0xa7b4) {
          if (param_2 - 0xa7c4 < 3) {
            uVar1 = *(uint *)(param_2 * 4 + 0x10136fe0);
            goto LAB_1011fc8e;
          }
          if (param_2 - 0xa7c7 < 3) {
            uVar1 = param_2 + 1 & 0xa7de;
            goto LAB_1011fc8e;
          }
          uVar1 = 0x264;
          if (param_2 == 0xa7cb) goto LAB_1011fc8e;
          if (0xe < param_2 - 0xa7cc) {
            if (param_2 == 0xa7dc) {
              uVar1 = 0x19b;
            }
            else if (param_2 == 0xa7f5) {
              uVar1 = 0xa7f6;
            }
            else {
              if (0x4f < param_2 - 0xab70) {
                switch(param_2) {
                case 0xfb00:
                  param_1[1] = 0x66;
                  param_1[2] = 0x66;
                  break;
                case 0xfb01:
                  param_1[1] = 0x66;
                  param_1[2] = 0x69;
                  break;
                case 0xfb02:
                  param_1[1] = 0x66;
                  param_1[2] = 0x6c;
                  break;
                case 0xfb03:
                  *param_1 = 0x66;
                  param_1[1] = 0x66;
                  param_1[2] = 0x69;
                  return;
                case 0xfb04:
                  *param_1 = 0x66;
                  param_1[1] = 0x66;
                  param_1[2] = 0x6c;
                  return;
                case 0xfb05:
                case 0xfb06:
                  param_1[1] = 0x73;
                  param_1[2] = 0x74;
                  break;
                default:
                  if (0x19 < param_2 - 0xff21) {
                    if ((param_2 - 0x10400 < 0x28) || (param_2 - 0x104b0 < 0x24)) {
                      uVar1 = param_2 + 0x28;
                      goto LAB_1011fc8e;
                    }
                    if ((((param_2 - 0x10570 < 0xb) || (param_2 - 0x1057c < 0xf)) ||
                        (param_2 - 0x1058c < 7)) || ((param_2 & 0x1ffffe) == 0x10594)) {
                      uVar1 = param_2 + 0x27;
                      goto LAB_1011fc8e;
                    }
                    if (param_2 - 0x10c80 < 0x33) {
                      uVar1 = param_2 | 0x40;
                      goto LAB_1011fc8e;
                    }
                    if ((0x15 < param_2 - 0x10d50) && ((param_2 & 0x1fffe0) != 0x118a0)) {
                      if ((param_2 & 0x1fffe0) == 0x16e40) {
                        uVar1 = param_2 | 0x20;
                      }
                      else if (param_2 - 0x16ea0 < 0x19) {
                        uVar1 = param_2 + 0x1b;
                      }
                      else {
                        uVar1 = param_2 + 0x22;
                        if (0x21 < param_2 - 0x1e900) {
                          uVar1 = param_2;
                        }
                      }
                      goto LAB_1011fc8e;
                    }
                  }
                  uVar1 = param_2 + 0x20;
                  goto LAB_1011fc8e;
                case 0xfb13:
                  param_1[1] = 0x574;
                  param_1[2] = 0x576;
                  break;
                case 0xfb14:
                  param_1[1] = 0x574;
                  param_1[2] = 0x565;
                  break;
                case 0xfb15:
                  param_1[1] = 0x574;
                  param_1[2] = 0x56b;
                  break;
                case 0xfb16:
                  param_1[1] = 0x57e;
                  param_1[2] = 0x576;
                  break;
                case 0xfb17:
                  param_1[1] = 0x574;
                  param_1[2] = 0x56d;
                }
                *param_1 = 0x110002;
                return;
              }
              uVar1 = param_2 - 0x97d0;
            }
            goto LAB_1011fc8e;
          }
        }
        uVar1 = param_2 | 1;
        goto LAB_1011fc8e;
      }
    }
  }
  uVar1 = param_2 | 1;
LAB_1011fc8e:
  if (0xffef07ff < (uVar1 ^ 0xd800) - 0x110000) {
    param_2 = uVar1;
  }
  param_1[1] = param_2;
  *param_1 = 0x110001;
  return;
}
