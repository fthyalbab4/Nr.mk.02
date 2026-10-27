// rea decompile_all
// name: FUN_005705c4
// address: 0x5705c4
// body: available
// range: 0x5705c4-0x570672 inclusive
// range: 0x570693-0x570a38 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005705c4(int *param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_98;
  undefined4 local_94;
  char local_8d;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  ushort local_72;
  int local_70;
  int local_6c;
  int *local_68;
  undefined1 local_64 [64];
  int local_24;

  puVar4 = &stack0xfffffffc;
  local_72 = param_3;
  local_68 = param_1;
  FUN_004f61b4(param_1,param_2,param_3);
  local_8d = '\0';
  cVar2 = FUN_00405d08(local_68,*param_2,local_72);
  if (cVar2 == '\0') {
    *param_2 = 0;
  }
  cVar2 = FUN_00405d08(local_68);
  if (cVar2 == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = -1;
  }
  local_84 = local_68[0xa2];
  local_80 = local_68[0xa3];
  local_7c = local_68[0xb2];
  local_78 = local_68[0xb3];
  FUN_00570518();
  if ((local_72 & 4) == 0) {
    uVar1 = *param_2;
    if (uVar1 < 0x26) {
      if (uVar1 == 0x25) {
        if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
          local_84 = local_84 - iVar3;
        }
        else {
          local_80 = local_80 - iVar3;
        }
      }
      else if (uVar1 < 0x23) {
        if (uVar1 == 0x22) {
          local_80 = local_80 + local_70;
          local_78 = local_78 + local_70;
        }
        else if (uVar1 == 9) {
          if ((local_72 & 2) == 0) {
            do {
              if ((local_72 & 1) == 0) {
                local_84 = local_84 + 1;
                if (local_68[0xa1] <= local_84) {
                  local_84 = local_68[0xa7];
                  local_80 = local_80 + 1;
                  if (local_68[0xb0] <= local_80) {
                    local_80 = local_68[0xa8];
                  }
                }
              }
              else {
                local_84 = local_84 + -1;
                if (local_84 < local_68[0xa7]) {
                  local_84 = local_68[0xa1] + -1;
                  local_80 = local_80 + -1;
                  if (local_80 < local_68[0xa8]) {
                    local_80 = local_68[0xb0] + -1;
                  }
                }
                local_72 = 0;
              }
              cVar2 = FUN_00571664(local_68,local_84);
            } while ((cVar2 == '\0') && (local_68[0xa2] != local_84));
          }
        }
        else if (uVar1 == 0x21) {
          local_80 = local_80 - local_70;
          local_78 = local_78 - local_70;
        }
      }
      else if (uVar1 == 0x23) {
        if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
          local_84 = local_68[0xa1] + -1;
        }
        else {
          local_80 = local_68[0xb0] + -1;
        }
      }
      else if (uVar1 == 0x24) {
        if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
          local_84 = local_68[0xa7];
        }
        else {
          local_80 = local_68[0xa8];
        }
      }
    }
    else if (uVar1 == 0x26) {
      local_80 = local_80 + -1;
    }
    else if (uVar1 == 0x27) {
      if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
        local_84 = local_84 + iVar3;
      }
      else {
        local_80 = local_80 + iVar3;
      }
    }
    else if (uVar1 == 0x28) {
      local_80 = local_80 + 1;
    }
    else if (uVar1 == 0x71) {
      FUN_005719f4(local_68,1,puVar4);
    }
  }
  else {
    switch(*param_2) {
    case 0x21:
      local_80 = local_68[0xb3];
      break;
    case 0x22:
      local_80 = local_24;
      break;
    case 0x23:
      local_84 = local_68[0xa1] + -1;
      local_80 = local_68[0xb0] + -1;
      local_8d = FUN_00405d08(local_68);
      break;
    case 0x24:
      local_84 = local_68[0xa7];
      local_80 = local_68[0xa8];
      local_8d = FUN_00405d08(local_68);
      break;
    case 0x25:
      if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
        local_84 = local_84 - local_6c * iVar3;
        local_7c = local_7c - local_6c * iVar3;
      }
      break;
    case 0x26:
      local_78 = local_78 + -1;
      break;
    case 0x27:
      if ((*(byte *)((int)local_68 + 0x2b5) & 0x10) == 0) {
        local_84 = local_84 + local_6c * iVar3;
        local_7c = local_7c + local_6c * iVar3;
      }
      break;
    case 0x28:
      local_78 = local_78 + 1;
    }
  }
  local_8c = local_68[0xa1] + -1;
  local_88 = local_68[0xb0] + -1;
  FUN_0056df20(local_68,&local_8c,local_64,&local_98);
  local_8c = local_98;
  local_88 = local_94;
  FUN_00570584(&local_7c,local_68[0xa7],local_68[0xa8],local_94,local_98);
  if ((local_68[0xb2] != local_7c) || (local_68[0xb3] != local_78)) {
    FUN_0056f998(local_68,local_7c,local_78);
  }
  FUN_00570584(&local_84,local_68[0xa7],local_68[0xa8],local_68[0xb0] + -1,local_68[0xa1] + -1);
  iVar3 = local_68[0xa2];
  if ((iVar3 != local_84) || (iVar3 = local_68[0xa3], iVar3 != local_80)) {
    FUN_0056ee24(local_68,local_84,local_80,
                 CONCAT31((int3)((uint)iVar3 >> 8),(local_72 & 1) != 0) ^ 1);
  }
  if (local_8d != '\0') {
    (**(code **)(*local_68 + 0x90))();
  }
  return;
}
