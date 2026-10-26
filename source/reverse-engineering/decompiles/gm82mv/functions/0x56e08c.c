// rea decompile_all
// name: FUN_0056e08c
// address: 0x56e08c
// body: available
// range: 0x56e08c-0x56e20b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56e0af (push 0x56e20c followed by fs-segment stack chaining); handler 0x56e20c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e08c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 local_4c [24];
  undefined1 local_34 [8];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  int iVar7;

  local_1c = &stack0xfffffffc;
  iVar4 = 9;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_20 = &LAB_0056e20c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x56e0ba;
  FUN_0056da1c(param_1);
  puStack_28 = (undefined1 *)0x56e0c2;
  iVar4 = FUN_0050bbe0(param_2);
  if (iVar4 == 0x1b8) {
    puStack_28 = (undefined1 *)0x56e0d5;
    puStack_28 = (undefined1 *)FUN_0050bbe0(param_2);
    *(undefined1 **)(param_1 + 8) = puStack_28;
    uStack_2c = 0x56e0f4;
    FUN_00409dfc(param_1 + 4,&DAT_0056d6a0,1);
    iVar4 = *(int *)(param_1 + 8);
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 0x28);
        puStack_28 = (undefined1 *)0x56e12b;
        uVar2 = FUN_0050bbe0(param_2);
        *puVar1 = uVar2;
        puStack_28 = (undefined1 *)0x56e13b;
        FUN_0056e020(param_2,local_34);
        puStack_28 = (undefined1 *)0x56e14f;
        FUN_00409360(puVar1 + 2,local_34,&DAT_00615f70);
        puStack_28 = (undefined1 *)0x56e157;
        puVar3 = (undefined1 *)FUN_0050bbe0(param_2);
        uStack_2c = 0x56e170;
        puStack_28 = puVar3;
        FUN_00409dfc(puVar1 + 8,&DAT_0056d600,1);
        if (-1 < (int)(puVar3 + -1)) {
          iVar6 = 0;
          local_1c = puVar3;
          do {
            puStack_28 = (undefined1 *)0x56e186;
            puVar3 = (undefined1 *)FUN_0050bbe0(param_2);
            uStack_2c = 0x56e1a2;
            puStack_28 = puVar3;
            FUN_00409dfc(puVar1[8] + iVar6 * 4,&DAT_0056d5c8,1);
            if (-1 < (int)(puVar3 + -1)) {
              iVar5 = 0;
              do {
                puStack_28 = (undefined1 *)0x56e1b8;
                FUN_0056e020(param_2,local_4c);
                puStack_28 = (undefined1 *)0x56e1d5;
                FUN_00409360(*(int *)(puVar1[8] + iVar6 * 4) + iVar5 * 0x18,local_4c,&DAT_00615f70);
                iVar5 = iVar5 + 1;
                puVar3 = puVar3 + -1;
              } while (puVar3 != (undefined1 *)0x0);
            }
            iVar6 = iVar6 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != (undefined1 *)0x0);
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_0056e213;
  puStack_20 = (undefined1 *)0x56e20b;
  FUN_00409120(local_4c,&DAT_00615f70,2);
  return;
}
