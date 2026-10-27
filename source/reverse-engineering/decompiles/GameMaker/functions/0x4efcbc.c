// rea decompile_all
// name: FUN_004efcbc
// address: 0x4efcbc
// body: available
// range: 0x4efcbc-0x4efd94 inclusive
// range: 0x4efdb5-0x4eff99 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004efcbc(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  BYTE local_11e [256];
  uint local_1e;
  char local_19;
  int *local_18;
  uint local_14;
  undefined2 local_10;
  undefined2 local_e;
  uint local_c;

  if (((((*(byte *)(param_1 + 7) & 0x10) == 0) ||
       (local_18 = (int *)FUN_00513780(param_1,0), local_18 == (int *)0x0)) || (local_18[0xaf] == 0)
      ) || (cVar3 = (**(code **)(*(int *)local_18[0xaf] + 0x24))
                              ((int *)local_18[0xaf],param_1,param_2), cVar3 == '\0')) {
    if ((*param_2 < 0x100) || (0x109 < *param_2)) {
      uVar1 = *param_2;
      if ((uVar1 < 0x200) || (0x20e < uVar1)) {
        if (uVar1 == 0xb00b) {
          FUN_004ee22c(param_1,0xb00b,param_2[1],param_2[2]);
        }
      }
      else {
        if (((*(byte *)(param_1 + 0x14) & 0x80) == 0) &&
           (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
          *param_2 = *param_2 - 2;
        }
        switch(*param_2) {
        case 0x200:
          FUN_005208b8(*(undefined4 *)PTR_DAT_00782280,param_1,param_2);
          break;
        case 0x201:
        case 0x203:
          if (*(char *)((int)param_1 + 0x5f) == '\x01') {
            FUN_00405d08(param_1);
            return;
          }
          param_1[0x15] = param_1[0x15] | 1;
          break;
        case 0x202:
          param_1[0x15] = param_1[0x15] & 0xfffffffe;
          break;
        default:
          if (((*(char *)(DAT_00788248 + 0x20) != '\0') && (*(int *)(DAT_00788248 + 0x1c) != 0)) &&
             (*param_2 == *(uint *)(DAT_00788248 + 0x1c))) {
            GetKeyboardState(local_11e);
            local_14 = *param_2;
            local_10 = FUN_0051365c(local_11e);
            local_e = (undefined2)param_2[1];
            local_1e = param_2[2];
            local_c = local_1e;
            FUN_00405d08(param_1,&local_14);
            return;
          }
          break;
        case 0x207:
          if ((((*(byte *)((int)param_1 + 0x52) & 8) != 0) && ((param_1[0x15] & 0x1200U) == 0)) &&
             (cVar3 = FUN_004fd5ac(DAT_00788248), cVar3 == '\0')) {
            FUN_004fd51c(DAT_00788248);
            local_19 = '\0';
            piVar2 = *(int **)(DAT_00788248 + 0x28);
            if (piVar2 != (int *)0x0) {
              cVar3 = FUN_00405c98(param_1,&PTR_LAB_004e61b8);
              if (cVar3 == '\0') {
                if (param_1[0xd] == 0) {
                  local_18 = (int *)FUN_00513780(param_1,0);
                  if (local_18 != (int *)0x0) {
                    uVar4 = FUN_004f76a8(local_18);
                    local_19 = (**(code **)(**(int **)(DAT_00788248 + 0x28) + 0xf4))
                                         (*(int **)(DAT_00788248 + 0x28),uVar4,param_1);
                  }
                }
                else {
                  uVar4 = FUN_004f76a8(param_1[0xd]);
                  local_19 = (**(code **)(*piVar2 + 0xf4))(piVar2,uVar4,param_1);
                }
              }
              else {
                uVar4 = FUN_004f76a8(param_1);
                local_19 = (**(code **)(*piVar2 + 0xf4))(piVar2,uVar4,param_1);
              }
            }
            if (local_19 == '\0') {
              if (*(int *)(DAT_00788248 + 0x28) != 0) {
                FUN_004fd688(DAT_00788248,0);
              }
            }
            else {
              param_2[3] = 1;
              FUN_00520a14(*(undefined4 *)PTR_DAT_00782280);
            }
          }
        }
      }
    }
    else {
      local_18 = (int *)FUN_00513780(param_1,1);
      if ((local_18 != (int *)0x0) &&
         (cVar3 = (**(code **)(*local_18 + 0x114))(local_18,param_1,param_2), cVar3 != '\0')) {
        return;
      }
    }
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
  }
  return;
}
