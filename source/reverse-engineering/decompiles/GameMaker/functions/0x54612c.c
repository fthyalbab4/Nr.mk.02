// rea decompile_all
// name: FUN_0054612c
// address: 0x54612c
// body: available
// range: 0x54612c-0x546223 inclusive
// range: 0x54627c-0x546281 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546197 (push 0x546224 followed by fs-segment stack chaining); handler 0x546224 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054612c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_18;
  int local_10;

  puStack_24 = (undefined1 *)0x546144;
  (**(code **)(**(int **)(*(int *)(param_4 + -4) + 0x20) + 0x18))();
  iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20);
  iVar2 = *(int *)(iVar1 + 8);
  if ((iVar2 != 0) && (iVar2 != 0x100)) {
    puStack_24 = (undefined1 *)0x546172;
    uVar3 = FUN_00540f48(iVar1,0,param_4);
    puStack_24 = (undefined1 *)0x3;
    puStack_28 = (undefined1 *)0x546189;
    puVar4 = (undefined4 *)FUN_0053be18(&PTR_LAB_0053ba74,1,param_1);
    puStack_28 = &LAB_00546224;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    local_18 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
    local_18 = local_18 & 0xffff;
    if (-1 < (int)(local_18 - 1)) {
      local_10 = 0;
      do {
        pcVar5 = (char *)(**(code **)*puVar4)(puVar4,local_10);
        puVar6 = (undefined1 *)FUN_005458a8(*(undefined4 *)(param_4 + -4),local_10);
        uVar7 = FUN_005449dc(*(undefined4 *)(param_4 + -4),3);
        uVar7 = uVar7 & 0xffff;
        if (-1 < (int)(uVar7 - 1)) {
          do {
            if (*pcVar5 != '\0') {
              *puVar6 = uVar3;
            }
            pcVar5 = pcVar5 + 1;
            puVar6 = puVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        local_10 = local_10 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    puVar6 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = &DAT_0054622b;
    puStack_28 = (undefined1 *)0x546223;
    FUN_00405a7c(puVar4,uStack_2c,puVar6);
    return;
  }
  return;
}
