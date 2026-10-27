// rea decompile_all
// name: FUN_005ca6c4
// address: 0x5ca6c4
// body: available
// range: 0x5ca6c4-0x5ca766 inclusive
// range: 0x5ca787-0x5ca7aa inclusive
// range: 0x5ca7e3-0x5ca9b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ca6c4(int *param_1)

{
  int iVar1;

  do {
    if (*(int *)((int)param_1 + 0x192) == 0) {
      if (*(int *)(*(int *)((int)param_1 + 0x1aa) + 0x50) == 0) {
        iVar1 = FUN_005ca628(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_005ca514(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    iVar1 = *(int *)((int)param_1 + 0x192);
    if (iVar1 < 0xcd) {
      if (iVar1 < 0xc5) {
        if (iVar1 < 0xc3) {
          if (iVar1 == 0xc2) {
            iVar1 = FUN_005c9140(param_1,1,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
          else {
            if (iVar1 == 1) goto switchD_005ca7a4_caseD_d0;
            if (1 < iVar1 - 0xc0U) goto switchD_005ca760_default;
            iVar1 = FUN_005c9140(param_1,0,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        else {
          if (iVar1 == 0xc3) goto switchD_005ca760_caseD_c5;
          if (iVar1 != 0xc4) goto switchD_005ca760_default;
          iVar1 = FUN_005c9df0(param_1);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      else {
        switch(iVar1) {
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xcb:
switchD_005ca760_caseD_c5:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x3b;
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)param_1 + 0x192);
          (**(code **)*param_1)();
          break;
        case 0xc9:
          iVar1 = FUN_005c9140(param_1,0,1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xca:
          iVar1 = FUN_005c9140(param_1,1,1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xcc:
          iVar1 = FUN_005c9c5c(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        default:
switchD_005ca760_default:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x43;
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)param_1 + 0x192);
          (**(code **)*param_1)();
        }
      }
    }
    else if (iVar1 < 0xdc) {
      if (iVar1 == 0xdb) {
        iVar1 = FUN_005ca110(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        switch(iVar1) {
        case 0xcd:
        case 0xce:
        case 0xcf:
          goto switchD_005ca760_caseD_c5;
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
switchD_005ca7a4_caseD_d0:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x5b;
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)param_1 + 0x192);
          (**(code **)(*param_1 + 4))(param_1,1);
          break;
        case 0xd8:
          iVar1 = FUN_005c9098(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xd9:
          *(undefined4 *)(*param_1 + 0x14) = 0x54;
          (**(code **)(*param_1 + 4))(param_1,1);
          *(undefined4 *)((int)param_1 + 0x192) = 0;
          return 2;
        case 0xda:
          iVar1 = FUN_005c94c0(param_1);
          if (iVar1 != 0) {
            *(undefined4 *)((int)param_1 + 0x192) = 0;
            return 1;
          }
          return 0;
        default:
          goto switchD_005ca760_default;
        }
      }
    }
    else if (iVar1 == 0xdc) {
      iVar1 = FUN_005ca480(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (iVar1 == 0xdd) {
      iVar1 = FUN_005ca394(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (iVar1 - 0xe0U < 0x10) {
      iVar1 = (**(code **)(*(int *)((int)param_1 + 0x1aa) + -0x370 +
                          *(int *)((int)param_1 + 0x192) * 4))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if (iVar1 - 0xe0U != 0x1e) goto switchD_005ca760_default;
      iVar1 = (**(code **)(*(int *)((int)param_1 + 0x1aa) + 0xc))();
      if (iVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)((int)param_1 + 0x192) = 0;
  } while( true );
}
