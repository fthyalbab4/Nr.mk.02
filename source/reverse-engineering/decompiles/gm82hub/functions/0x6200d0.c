// rea decompile_all
// name: FUN_006200d0
// address: 0x6200d0
// body: available
// range: 0x6200d0-0x620324 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6200f7 (push 0x620325 followed by fs-segment stack chaining); handler 0x620325 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006200d0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int *piVar5;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;

  puStack_54 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_58 = &LAB_00620325;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_10 = param_1;
  if (param_1 < 0) {
    local_10 = 0;
  }
  local_14 = param_2;
  if (param_2 < 0) {
    local_14 = 0;
  }
  if (DAT_006886b4 < local_10 + param_3) {
    param_3 = DAT_006886b4 - local_10;
  }
  if (DAT_006886b8 < local_14 + param_4) {
    param_4 = DAT_006886b8 - local_14;
  }
  if ((0 < param_3) && (0 < param_4)) {
    uVar1 = (**(code **)(*DAT_006886a8 + 0x20))();
    if ((uVar1 & 0x80000000) == 0) {
      FUN_0040b268(&local_8);
      uVar1 = (**(code **)(*DAT_006886a8 + 0x6c))();
      if ((uVar1 & 0x80000000) == 0) {
        FUN_0040b268(&local_c);
        uVar1 = (**(code **)(*DAT_006886a8 + 0x40))();
        if ((uVar1 & 0x80000000) == 0) {
          uVar1 = (**(code **)(*DAT_006886a8 + 0x70))();
          if ((uVar1 & 0x80000000) == 0) {
            piVar5 = local_c;
            (**(code **)(*local_c + 8))();
            FUN_0040b268(&local_c);
            piVar2 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
            (**(code **)(*piVar2 + 0x44))(piVar2,param_3,*piVar2,piVar5);
            (**(code **)(*piVar2 + 0x38))(piVar2,param_4);
            if ((local_28 == 0x16) || (local_28 == 0x15)) {
              FUN_00464480(piVar2,7);
            }
            else {
              if ((local_28 != 0x18) && (local_28 != 0x17)) {
                FUN_00405fdc(piVar2);
                FUN_0040b268(&local_8);
                goto LAB_00620304;
              }
              FUN_00464480(piVar2,5);
            }
            uVar1 = (**(code **)(*local_8 + 0x24))();
            if ((uVar1 & 0x80000000) == 0) {
              if (-1 < param_4 + -1) {
                iVar4 = 0;
                do {
                  uVar3 = FUN_004632a8(piVar2,iVar4);
                  FUN_00404514(iVar4 * local_24 + local_20,uVar3,local_24);
                  iVar4 = iVar4 + 1;
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
              (**(code **)(*local_8 + 0x28))();
              FUN_0040b268(&local_8);
            }
            else {
              FUN_00405fdc(piVar2);
              FUN_0040b268(&local_8);
            }
          }
        }
      }
    }
  }
LAB_00620304:
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_0062032c;
  puStack_58 = (undefined1 *)0x620324;
  FUN_00409120(&local_c,&LAB_00510f7c,2);
  return;
}
