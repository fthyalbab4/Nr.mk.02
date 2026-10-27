// rea decompile_all
// name: FUN_0045b498
// address: 0x45b498
// body: available
// range: 0x45b498-0x45b594 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45b4bb (push 0x45b595 followed by fs-segment stack chaining); handler 0x45b595 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b498(HANDLE param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  undefined4 local_164;
  undefined1 local_160 [256];
  undefined4 local_60 [3];
  undefined4 local_54;
  int local_50;
  char local_4c;
  char local_4b;
  char local_4a;
  undefined1 local_49;
  byte local_45;
  undefined1 local_44 [64];

  puStack_174 = &stack0xfffffffc;
  local_164 = 0;
  puStack_178 = &LAB_0045b595;
  uStack_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_17c;
  puVar3 = &DAT_0067d204;
  puVar4 = param_2;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = &stack0xfffffffc;
  if (param_1 != (HANDLE)0x0) {
    iVar2 = GetObjectW(param_1,0x5c,local_60);
    puVar1 = puStack_174;
    if (iVar2 != 0) {
      param_2[1] = local_60[0];
      if (699 < local_50) {
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 1;
      }
      if (local_4c == '\x01') {
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 2;
      }
      if (local_4b == '\x01') {
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 4;
      }
      if (local_4a == '\x01') {
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 8;
      }
      *(undefined1 *)((int)param_2 + 0xe) = local_49;
      FUN_004083a4(&local_164,local_44,0x20);
      FUN_0040b640(local_164,local_160);
      FUN_00404cfc((int)param_2 + 0xf,local_160,0x7c);
      if ((local_45 & 0xf) == 1) {
        *(undefined1 *)(param_2 + 3) = 2;
      }
      else if ((local_45 & 0xf) == 2) {
        *(undefined1 *)(param_2 + 3) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 3) = 0;
      }
      *param_2 = param_1;
      param_2[2] = local_54;
      puVar1 = puStack_174;
    }
  }
  puStack_174 = puVar1;
  puVar1 = puStack_174;
  *in_FS_OFFSET = uStack_17c;
  puStack_174 = &LAB_0045b59c;
  puStack_178 = (undefined1 *)0x45b594;
  thunk_FUN_004072d8(&local_164,uStack_17c,puVar1);
  return;
}
