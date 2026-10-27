// rea decompile_all
// name: FUN_0059c4a4
// address: 0x59c4a4
// body: available
// range: 0x59c4a4-0x59c6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059c4a4(int param_1,undefined2 param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_84 [16];
  int local_74;
  undefined1 local_54 [16];
  int local_44;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined2 local_6;

  local_6 = param_2;
  FUN_005992f4(param_1,local_84);
  bVar2 = *(char *)(param_1 + 0x318) - 1;
  if (bVar2 != 0) {
    iVar3 = bVar2 - 1;
    bVar2 = (byte)iVar3;
    if (bVar2 < 2) {
      FUN_00599d18(param_1,local_84);
      if (*(char *)(param_1 + 0x318) == '\x02') {
        *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d8) + param_4;
      }
      else {
        *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d8) + param_3;
      }
      FUN_00599d18(param_1,local_84);
      goto LAB_0059c6dd;
    }
    if (1 < (byte)(bVar2 - 2)) {
      if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
        return CONCAT31((int3)((uint)iVar3 >> 8),bVar2 - 4);
      }
      FUN_00599298(param_1,param_3,param_4,&local_10,local_84);
      if ((((*(byte *)(param_1 + 0x2b6) & 1) == 0) || (*(int *)(param_1 + 0x2a0) < local_c)) &&
         (((*(byte *)(param_1 + 0x2b5) & 0x80) == 0 || (*(int *)(param_1 + 0x29c) < local_10)))) {
        if ((*(int *)(param_1 + 0x328) != -1) || (*(int *)(param_1 + 0x32c) != -1)) {
          FUN_0059a704(param_1,*(int *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x32c));
          *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x330) = 0;
        }
      }
      else {
        if ((*(int *)(param_1 + 0x328) != -1) || (*(int *)(param_1 + 0x32c) != -1)) {
          FUN_0059a704(param_1,*(int *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x32c));
        }
        if ((local_10 != *(int *)(param_1 + 0x328)) || (local_c != *(int *)(param_1 + 0x32c))) {
          *(int *)(param_1 + 0x328) = local_10;
          *(int *)(param_1 + 0x32c) = local_c;
          *(undefined1 *)(param_1 + 0x330) = 0;
          FUN_0059a704(param_1,*(undefined4 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x32c));
        }
      }
      goto LAB_0059c6dd;
    }
  }
  FUN_00599298(param_1,param_3,param_4,&local_10,local_84);
  if ((((*(int *)(param_1 + 0x29c) <= local_10) && (*(int *)(param_1 + 0x2a0) <= local_c)) &&
      (local_10 <= local_74 + 1)) && (local_c <= local_44 + 1)) {
    cVar1 = *(char *)(param_1 + 0x318);
    if (cVar1 == '\x01') {
      if ((local_10 != *(int *)(param_1 + 0x278)) || (local_c != *(int *)(param_1 + 0x27c))) {
        FUN_0059adc4(param_1,&local_10);
      }
    }
    else if (cVar1 == '\x04') {
      local_1c = param_4;
      local_20 = param_3;
      FUN_0059ca70(param_1,param_4,local_c,&local_20,1,local_54,local_84);
    }
    else if (cVar1 == '\x05') {
      local_14 = param_4;
      local_18 = param_3;
      FUN_0059ca70(param_1,param_3,local_10,&local_18,0,local_84,local_84);
    }
  }
LAB_0059c6dd:
  uVar4 = FUN_004bd7bc(param_1,local_6,param_3,param_4);
  return uVar4;
}
