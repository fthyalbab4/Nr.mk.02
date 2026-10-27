// rea decompile_all
// name: FUN_0054a8f8
// address: 0x54a8f8
// body: available
// range: 0x54a8f8-0x54aa36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54a917 (push 0x54aa37 followed by fs-segment stack chaining); handler 0x54aa37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054a8f8(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int *local_18;
  byte local_12;
  byte local_11;
  int local_10;
  int *local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_0054aa37;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  cVar3 = FUN_00544778(param_2);
  if (cVar3 == '\0') {
    FUN_0043ae88(*(undefined4 *)(local_8 + 0x14),local_c);
    pbVar6 = (byte *)local_c[6];
    uVar4 = FUN_005449dc(local_c,3);
    uVar5 = FUN_005449dc(local_c,4);
    local_10 = (uVar4 & 0xffff) * (uVar5 & 0xffff);
    bVar1 = *(byte *)(local_c + 0xd);
    if (bVar1 == 0) {
      local_12 = 0;
    }
    else {
      local_12 = FUN_00547e88(local_c[0xe]);
    }
    local_11 = 0;
    for (; 0 < local_10; local_10 = local_10 + -1) {
      if ((bVar1 == 0) || (*pbVar6 != local_12)) {
        if (*(int *)(local_8 + 8) <= (int)(uint)*pbVar6) {
          *pbVar6 = 0;
          FUN_0040b75c(&PTR_DAT_0053b400,&local_1c);
          (**(code **)(*local_c + 0x10))(local_c,1,local_1c);
        }
        local_18 = (int *)(*(int *)(local_8 + 4) + (uint)*pbVar6 * 0x10);
        if (*local_18 == 0x7fffffff) break;
        *local_18 = *local_18 + 1;
      }
      else {
        local_11 = local_11 | bVar1;
      }
      pbVar6 = pbVar6 + 1;
    }
    if ((bVar1 != 0) && (local_11 == 0)) {
      FUN_00547e90(local_c[0xe],0);
      FUN_00547e38(local_c[0xe],0);
    }
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0054aa3e;
  puStack_30 = (undefined1 *)0x54aa36;
  thunk_FUN_00406e5c(&local_1c,uStack_34,puVar2);
  return;
}
