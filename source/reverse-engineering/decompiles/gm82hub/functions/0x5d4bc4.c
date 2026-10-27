// rea decompile_all
// name: FUN_005d4bc4
// address: 0x5d4bc4
// body: available
// range: 0x5d4bc4-0x5d4c7a inclusive
// range: 0x5d4caf-0x5d4f66 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d4bd7 (push 0x5d4f67 followed by fs-segment stack chaining); handler 0x5d4f67 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d4bc4(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005d4f67;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  puVar2 = &stack0xfffffffc;
  if ((byte)(*(char *)(param_1 + 0x134) - 1U) < 3 != (byte)(*(char *)(param_1 + 0x135) - 1U) < 2) {
    FUN_0040b9d0(PTR_LAB_00689138,&local_8);
    FUN_005d5860(param_1,local_8);
    puVar2 = puStack_10;
  }
  puStack_10 = puVar2;
  cVar1 = *(char *)(param_1 + 0x134);
  if (((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\a')) {
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 1;
  }
  else {
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xfe;
  }
  cVar1 = *(char *)(param_1 + 0x135);
  if (((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\a')) {
    *(byte *)(param_1 + 0x141) = *(byte *)(param_1 + 0x141) | 1;
  }
  else {
    *(byte *)(param_1 + 0x141) = *(byte *)(param_1 + 0x141) & 0xfe;
  }
  switch(*(undefined1 *)(param_1 + 0x134)) {
  case 1:
    if ((*(char *)(param_1 + 5) == '\x10') && (*(char *)(param_1 + 6) == '\x10')) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d2534;
    }
    else if (*(char *)(param_1 + 5) == '\x10') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d25d4;
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d26e0;
    }
    else {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d23c4;
    }
    break;
  case 2:
    if ((*(char *)(param_1 + 5) == '\x10') || (*(char *)(param_1 + 6) == '\x10')) {
      if ((7 < *(byte *)(param_1 + 5)) && (7 < *(byte *)(param_1 + 6))) {
        *(int *)(param_1 + 0x13c) = param_1;
        *(undefined1 **)(param_1 + 0x138) = &LAB_005d21e4;
      }
    }
    else {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d23c4;
    }
    break;
  case 3:
    if (((*(char *)(param_1 + 5) == '\b') || (*(char *)(param_1 + 5) == '\x10')) &&
       ((*(char *)(param_1 + 6) == '\b' || (*(char *)(param_1 + 6) == '\x10')))) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d21e4;
    }
    break;
  case 4:
  case 5:
    cVar1 = *(char *)(param_1 + 0x135);
    if (cVar1 == '\x04') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d2f2c;
    }
    else if (cVar1 == '\x05') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d2f2c;
    }
    else if (cVar1 == '\x06') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d27bc;
    }
    else if (cVar1 == '\a') {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d27bc;
    }
    break;
  case 6:
  case 7:
    if ((byte)(*(char *)(param_1 + 0x135) - 4U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005cf6dc;
    }
    else if ((byte)(*(char *)(param_1 + 0x135) - 6U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005cef6c;
    }
    break;
  case 8:
    break;
  case 9:
    if ((byte)(*(char *)(param_1 + 0x135) - 4U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d1ce8;
    }
    else if ((byte)(*(char *)(param_1 + 0x135) - 6U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d17ec;
    }
    break;
  case 10:
    if ((byte)(*(char *)(param_1 + 0x135) - 4U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d0b1c;
    }
    else if ((byte)(*(char *)(param_1 + 0x135) - 6U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005cfe4c;
    }
    break;
  case 0xb:
    FUN_005d495c(param_1);
    if ((byte)(*(char *)(param_1 + 0x135) - 4U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d44ac;
    }
    else if ((byte)(*(char *)(param_1 + 0x135) - 6U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(undefined1 **)(param_1 + 0x138) = &LAB_005d3ffc;
    }
    break;
  case 0xc:
    FUN_005d495c(param_1);
    if ((byte)(*(char *)(param_1 + 0x135) - 4U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d3b4c;
    }
    else if ((byte)(*(char *)(param_1 + 0x135) - 6U) < 2) {
      *(int *)(param_1 + 0x13c) = param_1;
      *(code **)(param_1 + 0x138) = FUN_005d369c;
    }
  }
  puVar2 = puStack_10;
  *(undefined1 *)(param_1 + 4) = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005d4f6e;
  puStack_14 = (undefined1 *)0x5d4f66;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar2);
  return;
}
